#include<stdio.h>
const int max=4;
int main()
{
	char*names[]={"Dinesh","Ayush","Bishnu","kripa"};
	int i=0;
	for(i=0;i<max;i++)
	{
		printf("Value of names[%d]=%s\n",i,names[i]);
	}
	return 0;
}
