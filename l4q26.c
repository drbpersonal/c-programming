#include<stdio.h>
int main()
{
	int i,sum=0,n;
	for(i=1;i<=10;i++)
	{
		printf("Enter a number:");
		scanf("%d",&n);
		if(n<0)
		{
			break;
		}
		sum =sum+n;
	}
	printf("Sum=%d",sum);
	return 0;
}
