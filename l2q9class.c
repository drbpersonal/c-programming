//#l2q9 Example of increment and decrement operator.
#include<stdio.h>
int main()
{
	int a=10;
	 a++;
	 printf("a=%d",a);//(postfix)
	 ++a;
	 printf("\na=%d",a);
     a--;
	 printf("\na=%d",a);//(postfix)
     --a;
     printf("\na=%d",a);

	 return 0;
}
