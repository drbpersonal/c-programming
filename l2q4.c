#include<stdio.h>
int main()
{
	int num,add,a,b,c;
	printf("Enter 3 digit number:");//345
	scanf("%d",&num);
	a=num%10;//345%10
	num=num/10;//
	b=num%10;
	num=num/10;
	c=num%10;
	add=a+b+c;
	printf("The sum of three digit number is :%d",add);
	return 0;
}
