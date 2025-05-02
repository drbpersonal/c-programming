#include<stdio.h>
void small(int a,int b);
int main()
{
	int a,b,s;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	small(a,b);
	return 0;
}
void small(int a,int b)
{
	
	if(a<b)
	{
	printf("%d is smaller number",a);
	}
else
{
	printf("%d is smaller number:",b);
}
}
