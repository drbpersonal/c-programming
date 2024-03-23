//Wap to convert days into month and month
#include<stdio.h>
int main()
{
	int day,month;
	printf("Enter days:");
	scanf("%d",&day);
	month=day/30;
	day = day%30;
	printf("%d month and %d days",month,day);
	return 0;
}
