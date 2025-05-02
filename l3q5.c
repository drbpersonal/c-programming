//check largest number among two different numbers
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("The number %d id greater then %d",a,b);
	}
	else
	{
		printf("%d is greater then %d",b,a);
	}
	return 0;
}
