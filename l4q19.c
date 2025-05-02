#include<stdio.h>
int main()
{
	int n,sum=0,digit,temp;
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
do	{
		digit=n%10;
		sum+=digit*digit*digit;
		n=n/10;
	}
		while(n>0);
	if(temp==sum)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("NOT Armstrong number");
	}
	return 0;
}
