//Wap to find largest number among 3 using conditional operator

#include<stdio.h>
int main()
{
	int a,b,c,large1,large2;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	large1=a>b?a:b;
	large2=large1>c?large1:c;
	printf("The largest number among three number is %d",large2);
	return 0;
}
