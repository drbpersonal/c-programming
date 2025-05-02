
//Create structure  person with data field age and weight.Take info of person using pointer
#include<stdio.h>
struct person
{
	int age;
	int wt;
}per[2];
 int main()
 {
 	int i;
 struct person *ptr;
 ptr=per;
 for(i=0;i<3;i++)
 {
 	printf("Enter age and weight of person:");
 	scanf("%d%d",&ptr->age,&ptr->wt);
 	ptr++;
 }
 ptr=per;
 for(i=0;i<3;i++)
 {
 printf("Age:%d\nWT=%d\n\n",ptr->age,ptr->wt);
 ptr++;
 } 
 return 0;
}
