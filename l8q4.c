#include<stdio.h>
struct student
{
	int id;
	char name[30];
	float marks;
}s1,s2,s3,s4,s5;
int main()
{
	printf("Enter first ID,Name and Mark:");
	scanf("%d%s%f",&s1.id,&s1.name,&s1.marks);
	printf("\nEnter second ID,Name and Mark:");
	scanf("%d%s%f",&s2.id,&s2.name,&s2.marks);
    printf("\nEnter Third ID,Name and Mark:");
	scanf("%d%s%f",&s3.id,&s3.name,&s3.marks);
	printf("\nEnter fourth ID,Name and Mark:");
	scanf("%d%s%f",&s4.id,&s4.name,&s4.marks);
	printf("\nEnter fifth ID,Name and Mark:");
	scanf("%d%s%f",&s5.id,&s5.name,&s5.marks);
	printf("First student information \nId =%d\nName=%s\nmarks=%f\n",s1.id,s1.name,s1.marks);
	printf("\nSecond student information \nId =%d\nName=%s\nmarks=%f\n",s2.id,s2.name,s2.marks);
	printf("\nThird student information \nId =%d\nName=%s\nmarks=%f\n",s3.id,s3.name,s3.marks);
	printf("\nFourth student information \nId =%d\nName=%s\nmarks=%f\n",s4.id,s4.name,s4.marks);
	printf("\nFifth student information \nId =%d\nName=%s\nmarks=%f\n",s5.id,s5.name,s5.marks);

	return 0;
}
