#include<stdio.h>
struct student
{
	char name[30];
	int roll;
	int mark;
}std;
void display(struct student std);
int main()
{
printf("Enter name,roll,mark:");
scanf("%s%d%d",&std.name,&std.roll,&std.mark);
display(std);
return 0;	
}
void display(struct student std)
{
	printf("Name=%s\nRoll=%d\nMark=%d\n",std.name,std.roll,std.mark);
}

