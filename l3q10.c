#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Choose:");
	scanf("%c",&ch);
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case'+':
		printf("Add=%d",a+b);
		break;
		case'-':
		printf("sub=%d",a-b);
		break;
		case'*':
		printf("mult=%d",a*b);
		break;
		case'/':
		printf("div=%d",a/b);
		break;
		case'%':
		printf("mod=%d",a%b);
		break;
		default:
			printf("Enter");
		
	}
	return 0;
}
