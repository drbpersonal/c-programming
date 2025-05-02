#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	int a,b,s;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	s=a+b;
	printf("sum=%d:",s);

}
