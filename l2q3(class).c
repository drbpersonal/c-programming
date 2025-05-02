//Write a program to convert second into minute and hours
#include<stdio.h>
int main()
{
	int min,hour,second;
	printf("Enter second:");
	scanf("%d",&second);//
	hour=second/3600;//3601/3600 =1
	second=second%3600;
	min=second/60;
	second=second%60;
	printf("The converted time is %d hour, %d minute, %d second",hour,min,second);
	return 0;
	
}
