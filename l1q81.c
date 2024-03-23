//#L1Q8  Write a program to take 5 marks of subject from user and display the average marks.
#include<stdio.h>
int main()
{
	float s,m,e,h,c,avg;
	printf("Enter your marks in Science:");
	scanf("%f",&s);
		printf("Enter your marks in maths:");
	scanf("%f",&m);
		printf("Enter your marks in english:");
	scanf("%f",&e);	
	printf("Enter your marks in health:");
	scanf("%f",&h);
		printf("Enter your marks in c programming:");
	scanf("%f",&c);
	avg=(s+m+e+h+c)/5;
	printf("Avg=%.2f",avg);
	return 0;
	
}
