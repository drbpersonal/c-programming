#include<stdio.h>
struct employee
{
	int address;
	char name[30];
	float salary;
	int age;
};
int main()
{
	int i,n;
	float avg=0;
	printf("Enter employee number:");
	scanf("%d",&n);
	struct employee emp[n];
	for(i=0;i<n;i++)
	{
		printf("Info of %d employee Name,Salary and Age :\n",i+1);
		scanf("%s%f%d",&emp[i].name,&emp[i].salary,&emp[i].age);
		avg=avg+emp[i].salary;
	}
	for(i=0;i<n;i++)
	{
		printf("Info of %d emp\nName=%s\nsalary=%f\nage=%d\n",i+1,emp[i].name,emp[i].salary,emp[i].age);
	}
	avg=avg/n;
	printf("\nAvg Salary=%f",avg);

	return 0;
}
