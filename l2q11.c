//WAP to check largest number of user entered two number using conditional operator.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two number");
	scanf("%d%d",&a,&b);
	puts(a>b?"a is greater":"b is greater");
	return 0;
}
