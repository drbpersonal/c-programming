//WAP to convert second into minute and hour.
#include<stdio.h>
int main()
{
	int minute,hour,second;
	printf("Enter second");
	scanf("%d",&second);
	hour=second/3600;
	second=second%3600;
	minute=second/60;
	second=second%60;
	printf("The time is :%d hour %d minute and %d second",hour,minute,second);
	return 0;
}
