#include<stdio.h>
int main()
{
	int n,rev=0,digit,temp;
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("palindrome number");
	}
	else
	{
		printf("NOT palindrome");
	}
	return 0;
}
