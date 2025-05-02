//WAP to display the sum of all user entered number.
#include<stdio.h>
int main()
{
	int rem,n,sum=0;
	n=1;
	printf("Enter number:");
	scanf("%d",&n);
	do{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
		while(n>0);

	printf("sum=%d",sum);
	return 0;
}
