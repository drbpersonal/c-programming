//l2q10 WAP to check the student is pass or fail.
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter a marks of student");
	scanf("%d",&marks);
	puts(marks>=40?"passed":"failed");
	return 0;
}
