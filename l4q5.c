//WAP to add even number from 1 to 10 using while loop
#include<stdio.h>
int main()
{
	int n,sum=0;
	n=1;
	while(n<=10)
	{
		if(n%2==0)
		{
			sum=sum+n;
		}
		n++;
	}
	printf("sum=%d",sum);
	return 0;
}
