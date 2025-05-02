// wap to check whether entered number is negative using if statement
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("%d is negative number",n);
	}
	return 0;
}
