//l2q8 Example of assignment operator

#include<stdio.h>
int main()
{
	int a=10,b=20;
	a=a+b;
	printf(" value of a= %d ",a);
	a=a-b;
	printf("\nvalue of a=%d",a);
	a=a/a;
	printf("\nvalue of a=%d",a);
	a*=b;
	printf("\nvalue of a=%d",a);
	a+=b;
	printf("\nvalue of a=%d",a);
	a-=b;
	printf("\nvalue of a=%d",a);
    a%=b;
	printf("\nvalue of  a=%d",a);

	return 0;
}
