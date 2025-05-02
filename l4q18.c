#include<stdio.h>
int main()
{
	int n,rev=0,digit,temp;
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
do	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
		while(n>0);

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
