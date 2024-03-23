#include<stdio.h>
int main()
{
	char name[20];
	int r1;
	float m1;
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Enter your roll number:");
	scanf("%d",&r1);
	printf("Enter your marks:");
	scanf("%f",&m1);
	
	printf("Your name is :%s",name);
	printf("\nYour roll number is: %d",r1);
	printf("\nYour marks is: %f",m1);
	
	return 0;
}
