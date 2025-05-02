#include<stdio.h>
int main()
{
	int x,n,sum,i;
	printf("Enter the number x and n:");
	scanf("%d%d",&x,&n);
	sum=1+x*x;
	for(i=3;i<=n;i++)
	{
		sum=sum+i*x*x;
	}
	printf("Sum=%d",sum);
	return 0;
	
}
