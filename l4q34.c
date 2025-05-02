#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,n,x=1;
	printf("Enter a and n:");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		x=x-pow(a,i);
		else
		x=x+pow(a,i);
	}
	printf("sum=%d",x);
	return 0;
}
