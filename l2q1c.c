// WAP to comvert days into days and month

#include<stdio.h>
int main()
{
	int days,month;
	printf("Enter days:");
	scanf("%d",&days);
	month=days/30;
	days=days%30;
	printf("month=%d and days=%d",month,days);
	return 0;
}


