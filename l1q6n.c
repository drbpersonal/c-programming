#include<stdio.h>
int main()
{
	char n1[20],n2[20],n3[20];
	int r1,r2,r3;
	float m1,m2,m3;
	printf("Enter first name :");
	scanf("%s",&n1);
	printf("Enter 1st mark:");
	scanf("%f",&m1);
	printf("Enter 1st roll:");
	scanf("%d",&r1);
	printf("Enter 2nd name :");
	scanf("%s",&n2);
	printf("Enter 2nd mark:");
	scanf("%f",&m2);
	printf("Enter 2nd roll:");
	scanf("%d",&r2);
	printf("Enter 3rd name :");
	scanf("%s",&n3);
	printf("Enter 3rd mark:");
	scanf("%f",&m3);
	printf("Enter 3rd roll:");
	scanf("%d",&r3);
	printf("Name1:%s",n1);
	printf("\nMark1:%0.2f",m1);
	printf("\nRoll1:%d",r1);

	printf("\n\nName2:%s",n2);
	printf("\nMark2:%0.2f",m2);
	printf("\nRoll2:%d",r2);
	
	printf("\n\nName3:%s",n3);
	printf("\nMark3:%0.2f",m3);
	printf("\nRoll3:%d",r3);
	return 0;	
}
