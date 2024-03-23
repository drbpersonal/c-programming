#include<stdio.h>
int main()
{
	int a;
	float b;
	char ch;
	char name[20];
	printf("Enter a b ch and name:");
	scanf("%d %f %c %s",&a,&b,&ch,&name);
	printf("Your a=%d,b=%f,ch=%c,name=%s",a,b,ch,name);
	return 0;
}
