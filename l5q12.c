#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="hello",str2[20]="NCC";
	strcat(str1,str2);
	puts(str1);
	puts(str2);
	return 0;
}
