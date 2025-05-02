
//Program to find x of following series   x=a-a^2/2 + a^3/3 - a^4/4 _ _ _ _ _ _ upto N.
#include<stdio.h>
int main()
{
	float a,n,x=0;
	int i;
	printf("Enter a & n");
	scanf("%f%f",&a,&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			x=x-pow(a,i)/i;
		}
		else
		{
		    x=x+pow(a,i)/i;	
		}
	}
	printf("x=%f",x);
	return 0;
}
