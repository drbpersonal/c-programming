/*#include<stdio.h>
int main()
{
	char name[20];
	puts("Enter your name:");
	gets(name);
	puts(name);
	/*int a;
	float b;
	printf("Enter two numbers ");
	scanf("%d%f",&a,&b);
    printf("Your number is %d and %f",a,b);*/
#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
printf("Enter a number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
printf("%d is not prime",num);
break;
}
}
if(i==num)
{
printf("%d is prime",num);
}
getch();
}

