//Wap to print the sum of number from 1 to 10 by using while loop
#include<stdio.h>
int main()
{
	int n,sum=0;
	n=1; 
	while(n<=10)
	{
		printf("%d\t",n);
		sum=sum+n;
		n++;
		
	}
	printf("\nSum=%d",sum);
	return 0;
}
