#include<stdio.h>
int main()
{
	int i=1;
	loop:
		printf("%d\t",i);
		i++;
		if(i<=10)
		{
			goto loop;
		}
		return 0;
}
