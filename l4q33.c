l//Write a program to calculate the sum of series
//x=1+2!+3!+4!+__ _ _ _ n!

#include<stdio.h>
int main()
{
	int n,i,j,fact=1,sum=0;
	printf("Enter the  Number:");//4
	scanf("%d",&n);
	for(i=1;i<=n;i++)
 	{
 		for(j=1;j<=i;j++)
 		{
 			fact=fact*j;
		 }
		 sum=sum+fact;
	 }
	printf("Sum=%d",sum);
	return 0;
}
