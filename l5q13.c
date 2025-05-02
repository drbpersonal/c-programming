#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	strcpy(str1,"Hello");
	strcpy(str2,"NCC");
	strcat(str1,str2);
	printf("final=%s",str1);
	return 0;
}
