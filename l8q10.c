#include<stdio.h>
struct person
{
	int age;
	float wt;
};
 int main()
 {
 int i;
 struct person per;
 struct person *ptr;
 ptr=&per;
 for(i=0;i<2;i++)
 {
 printf("Enter age:");
 scanf("%d",&ptr->age);
 printf("Enter wt:");
 scanf("%f",&ptr->wt);
 ptr++;
}
ptr=&per;
for(i=0;i<2;i++)
{
 printf("Age:%d\nWT=%f\n",ptr->age,ptr->wt);
 ptr++;
}
 return 0;
}
