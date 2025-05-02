//write a program to add 3 digit number within eachother.
#include<stdio.h>
int main()
{
	int n,n1,n2,n3,sum;
	printf("Enter three digit number :");
	scanf("%d",&n);
	n1=n%10; //149%10=9
	n=n/10; //149/10=14
	n2=n%10; //14%10=4
	n=n/10; //14/10=1
	n3=n%10;
	sum=n1+n2+n3;
	printf("THe sum of three digit number is= %d",sum);
	return 0;
	}
