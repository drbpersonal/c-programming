#include<stdio.h>
void small();
int main()
{
	small();
	return 0;
}
void small()
{
	int a,b,s;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
	printf("%d is smaller number",a);
	}
else
{
	printf("%d is smaller number:",b);
}
}
