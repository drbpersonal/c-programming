//WAP to display number from one to 100 using while loop
#include<stdio.h>
int main()
{
	int n;
	n=2;
	while(n<=100)
	{
		if(n%2==0)
		{
			printf("%d \t ",n);
			n=n+2;

		}

	//	n++;
	}
	return 0;
}
