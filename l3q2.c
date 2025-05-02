//Wap to check user entered number is  +ve or not
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is positive number",n);
	}
	return 0;
}
