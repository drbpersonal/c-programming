#include<stdio.h>
int main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("Address of ptr=%d",ptr);
	ptr=ptr-1;
	printf("\nAfter decrement address of ptr=%d",ptr);
	return 0;
}
