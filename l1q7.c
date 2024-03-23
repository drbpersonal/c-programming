//Write a program to show all data type
#include<stdio.h>
int main()
{
	int a;
	char cha;
	float b;
	char name[20];
	printf("Enter a,cha,b and name");
	scanf("%d %c %f %s",&a,&cha,&b,&name);
	printf("Data types integer is :%d,character is:%c,float is:%f and string is :%s",a,cha,b,name);
	return 0;
}
