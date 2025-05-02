#include<stdio.h>
struct person
{
	int age;
	float wt;
};
 int main()
 {
 
 struct person per;
  struct person *ptr;
 ptr=&per;
 printf("Enter age:");
 scanf("%d",&ptr->age);
 printf("Enter wt:");
 scanf("%f",&ptr->wt);
 printf("Age:%d\nWT=%f",ptr->age,ptr->wt);
 return 0;
}
