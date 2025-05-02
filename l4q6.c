//Wap to take 5 marks from user then find average of 5 subject using whie loop
#include<stdio.h>
int main()
{
	float sub,total,avg;
	int n;
	n=1;
	total=0;
	while(n<=5)
	{
     printf("Enter marks:");
     scanf("%f",&sub);
     total=total+sub;
     n++;
    }
	avg=total/5;
	printf("avg=%.2f",avg);
	return 0;
}
