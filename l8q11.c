#include<stdio.h>
struct student
{
	char name[30];
	int roll;
	int mark;
}std;
void display(char name[],int roll,int mark);
int main()
{
printf("Enter name,roll,mark:");
scanf("%s%d%d",&std.name,&std.roll,&std.mark);
display(std.name,std.roll,std.mark);
return 0;	
}
void display(char name[],int roll,int mark)
{
	printf("Name=%s\nRoll=%d\nMark=%d\n",name,roll,mark);
}

