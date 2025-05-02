#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("a=%d\t b=%d\n",a,b);
	swap(a,b);
	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping \n a=%d\tb=%d",a,b);
}
