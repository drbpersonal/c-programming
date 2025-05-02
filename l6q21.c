#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	printf("a=%d\t b=%d",a,b);
	swap(&a,&b);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nAfter swapping a=%d & b=%d",*a,*b);
}
