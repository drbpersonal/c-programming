#include<stdio.h>
int main()
{
	int decnum,binnum,rev=0,q=1,rem,i=1;
	printf("Enter decimal number:\t");
	scanf("%d",&decnum);
	while(q>0)
	{
		q=decnum/2;
		rem=decnum%2;
		decnum=q;
		rev=rev+rem*i;
		i=i*10;
	}
	printf("The crossponding binary number is %d",rev);
	return 0;
}
