#include<stdio.h>
struct student
{
	char name[30];
	int roll;
	int mark;
}std[4];
void display(struct student std[]);
int main()
{
  int i;
  for(i=0;i<3;i++)
  {
      printf("Enter name,roll,mark:");
      scanf("%s%d%d",&std[i].name,&std[i].roll,&std[i].mark);
  }
display(std);
return 0;	
}
void display(struct student std[])
{
	int i;
	for(i=0;i<3;i++)
	printf("Name=%s\nRoll=%d\nMark=%d\n",std[i].name,std[i].roll,std[i].mark);
}

