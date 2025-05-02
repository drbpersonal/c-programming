#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
}std;
struct employee
{
	int id;
	char name[20];
	float salary;
}emp;
int main()
{
	printf("Enter roll:");
	scanf("%d",&std.roll);
	printf("Enter Name:");
	scanf("%s",&std.name);
	printf("Enter marks:");
	scanf("%f",&std.marks);
    printf("Enter ID:");
	scanf("%d",&emp.id);
	printf("Enter Name:");
	scanf("%s",&emp.name);
	printf("Enter salary:");
	scanf("%f",&emp.salary);	
	printf("\nYour information of student\n");
	printf("Roll=%d\nName=%s\nMarks=%f",std.roll,std.name,std.marks);
	printf("\n\nYour information of employee:");
	printf("\nID=%d\nName=%s\nSalary=%f",emp.id,emp.name,emp.salary);
	return 0;
}
