//Wap to find factorial number using recursion.
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("%d\t",fact(i));
	return 0;
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return(n*fact(n-1));
}
