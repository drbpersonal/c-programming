//Wap to find small number using return value and argument
#include<stdio.h>
int small(int a,int b);
int main()
{
	int a,b,ncc;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	ncc=small(a,b);
	printf("small=%d",ncc);
	return 0;
}
int small(int a,int b)
{
	if(a<b)
	return a;
	else
	return b;
}

