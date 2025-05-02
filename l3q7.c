//l3q7 
#include<stdio.h>
int main()
{
	int m1;
	printf("Enter your marks:");
	scanf("%d",&m1);
	if(m1>=0&&m1<50)
	{
			printf("student is fail");   

	}
    else if(m1>=50&&m1<60)
	{
		printf("pass with second division",m1);
	}
	else if(m1>=61&&m1<80)
	{
		printf("pass with first division");
	}
	else if(m1>=80&&m1<=100) 
	{
		printf("pass with distinction");
	}
	else
	{
		printf("invalid marks please give range between 0-100");
	}
	return 0;
}
