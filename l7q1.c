#include<stdio.h>
int main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("Value of a=%d",a);
	printf("\nAddress of a=%d",&a);
	printf("\nValue of a= %d",*ptr);
	printf("\nAddress of a =%d\n",ptr);
	printf("Address of pointer=%d",&ptr);
	return 0;
}
