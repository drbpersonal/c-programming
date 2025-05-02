#include<stdio.h>
int main()
{
	int decnum,binnum,rev=0,q=1,rem,i=1;
	printf("Enter decimal number:\t");
	scanf("%d",&decnum);
	do{
		q=decnum/2;
		rem=decnum%2;
		decnum=q;
		rev=rev+rem*i;
		i=i*10;
	}
		while(q>0);

	printf("The crossponding binary number is %d",rev);
	return 0;
}
