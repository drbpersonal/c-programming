#include<stdio.h>
int main()
{
	int a=1,b=2,c=3,d=4,i;
	int *ptr[4];
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
	ptr[3]=&d;
	for(i=0;i<4;i++)
	{
		printf("The value of ptr[%d]=%d\n",i,*ptr[i]);
	}
	return 0;
}
