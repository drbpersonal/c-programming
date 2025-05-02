//l3q8 Wap to find largest number among three different number using nested if else statement

#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	if (n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is larger",n1);
		}
		else
		{
			printf("%d is largest",n1);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("%d is greater",n2);
		}
		else
		{
			printf("%d is greater",n3);
		}
	}
	return 0;
}

