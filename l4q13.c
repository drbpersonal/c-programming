//Wap to print the sum of number from 1 to 10 by using do while loop
#include<stdio.h>
int main()
{
	int n,sum=0;
	n=1; 
	do
	{
		printf("%d\t",n);
		sum=sum+n;
		n++;
		
	}
		while(n<=10);
	printf("\nSum=%d",sum);
	return 0;
}
