#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	struct student std;
	printf("Enter roll:");
	scanf("%d",&std.roll);
	printf("Enter Name:");
	scanf("%s",&std.name);
	printf("Enter marks:");
	scanf("%f",&std.marks);
	printf("Your information:\n");
	printf("Roll=%d\nName=%s\nMarks=%f",std.roll,std.name,std.marks);
	return 0;
}
