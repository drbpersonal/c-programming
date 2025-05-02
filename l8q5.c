#include<stdio.h>
struct student
{
	int id;
	char name[30];
	float percentage;
}std[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Info of %d student Id,Name,percentage:",i+1);
		scanf("%d%s%f",&std[i].id,&std[i].name,&std[i].percentage);
	}
	for(i=0;i<3;i++)
	{
		printf("Info of %d student Id=%d,Name=%s,percentage=%f\n",i+1,std[i].id,std[i].name,std[i].percentage);
	}
	printf("Student with percentage>=80:\n");
	for(i=0;i<3;i++)
	{
		if(std[i].percentage>=80){
		
		printf("Name:%s\n",std[i].name);
	}
}
	return 0;
}
