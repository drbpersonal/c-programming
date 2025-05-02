#include<stdio.h>
/*{
	int day;
	printf("s\nm\nt\nw\nt\nf\ns\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Its sunday:");
			break;
			case 2:
				printf("Its monday");
				break;
				case 3:
				printf("Its tuesday");
				break;
				case 4:
				printf("Its wednesday");
				break;
				case 5:
				printf("Its Thrusday");
				break;
				case 6:
				printf("Its friday");
				break;
				case 7:
				printf("Its saturday");
				break;
				default:
					printf("Enter betwn seven");
				
				
	}
					return 0;

	
}
{
	int c;
	float f;
	printf("Temperature in fahrenheit:\n");
	for(c=0;c<=25;c++)
	{
		f=(float)c*9/5+32;
		printf("%.2f\t",f);
	}
	return 0;
}

{
	int i,j,p;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
		
		//p=(i+j)+1;
		//	printf("%d\t",p);
		}
			printf("\n");
		
	}
			return 0;

}



{
	char name[30];
	printf("\n Enter your name:");
	scanf("%[^\n]",name);
	printf("\n Your name is %s",name);
	return 0;
}





{

char str1[20]="hello",str2[20]="NCC";
strcat(str1,str2);
puts(str1);
return 0;
}


int add(int c,int d)
{
	int sum;
	sum=c+d;
	return sum;
}
int main()
{
	int a=50,b=12,x;
	x=add(a,b);
	printf("sum=%d",x);
	return 0;
}


int main()
{
	int a,b,c,d,e;
	printf("Enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	d=large(a,b);
	e=large(d,e);
	printf("The largest number is %d",e);
	return 0;
}
int large(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}


int calc(int y);
int main()
{
 int y = 10;
 y = calc(y);
 printf("value of y is %d", y);
 return 0;
}
int calc(int x)
{
 x = x + 10 ;
 return x;
}

void swap(float*,float*);
int main()
{
	float a,b;
	printf("Enter two number:\n");
	scanf("%f%f",&a,&b);
	printf("Before swapping a=%f and b=%f",a,b);
	swap(&a,&b);
	printf("after swap a=%f and b=%f",a,b);
	return 0;
}
void swap( float*a,float*b)
{
	float temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n a=%f and b=%f\n",*a,*b);
}

int test()
{
	auto int i=10;
	printf("%d\t",i);
	i++;
}
int main()
{
test();
test();
test();
test();
return 0;

}


	int a=4,b=7,c=7;

int sum();
int prod();
int main()
{
	printf("The sum is %d\n",sum());
	printf("The product is %d",prod());
	return 0;
}
int sum()
{
	return(a+b+c);
}
int prod()
{
	return(a*b*c);
}*/








struct student
{
	char name[20];
	int roll_num;
	float p;
}std[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter the detail of %d student including name,roll and percentage:\n",i+1);
		scanf("%s%d%f",&std[i].name,&std[i].roll_num,&std[i].p);
	//	{
	//	printf("Info of %d student Id,Name,percentage:",i+1);
	//	scanf("%d%s%f",&std[i].id,&std[i].name,&std[i].percentage);
	//}
	}
	for(i=0;i<3;i++)
	{
		printf("Name=%s\nRoll Number=%d\nPercentage=%f\n",std[i].name,std[i].roll_num,std[i].p);
	}
	for(i=0;i<3;i++)
	{
		if(std[i].p>=80)
		{
			printf("The student with percentage greater then 80 are :%s\n",std[i].name);
		}
	}
	return 0;
}
