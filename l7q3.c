#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4},i;
	int *ptr[4];
	for(i=0;i<4;i++)
	{
		ptr[i]=&a[i];
		printf("The value of ptr[%d]=%d\n",i,*ptr[i]);
	}
	return 0;
}
