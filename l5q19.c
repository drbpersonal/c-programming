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
	//printf("\n your sum\n");
	//sum(a);
	return 0;
}
void display(int n[])
{
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,n[i]);
	}
	//printf("sum=%d",sum);
}
void sum(int n[])
{
	
	int i,sum1=0;
	for(i=0;i<10;i++)
	{
	sum1=sum1+n[i];
	}
	printf("Sum=%d",sum1);
}
