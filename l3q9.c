#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
	{
	
	printf("%d is smallest number",a);	
	}
	else
	{
		printf("%d is smallest",c);
	}
   }
}
