//WAP to read 10 number in a arrayand find their sum and display using the function
#include<stdio.h>
void sum(int n[]);
void display(int n[]);
int main()
{
	
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("your value:\n");
	display(a);
	sum1(a);
	return 0;
}
void display(int n[])
{
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,n[i]);
	}
}
void sum1(int n[])
{
	
	int i,sum=0;
	for(i=0;i<10;i++)
	{
	sum=sum+n[i];
	}
	printf("Sum=%d",sum);
}
