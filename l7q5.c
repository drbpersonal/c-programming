#include<stdio.h>
void conv(char *c);
int main()
{
	char c;
	printf("Enter character");
	scanf("%c",&c);
	conv(&c);
	printf("Converted character is %c",c);
	return 0;
}
void conv(char *c)
{
	if(*c>=65 && *c<=90)
		*c=*c+32;
	else if (*c>=97 && *c<=122)
		*c=*c-32;
}
