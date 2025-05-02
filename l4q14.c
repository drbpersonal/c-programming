//WAP to display number from one to 100 using do while loop
#include<stdio.h>
int main()
{
	int n;
	n=2;

	do{
		if(n%2==0)
		{
			printf("%d \t ",n);
			n=n+2;

		}


	//	n++;
	}
				while(n<=10);

	return 0;
}
