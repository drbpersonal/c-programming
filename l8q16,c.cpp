#include<stdio.h>
union employee
{
	char name[50];
	char gender;
	int age;
	float salary;
}Uemp;
struct employee1
{
	char name[50];
	char gender;
	int age;
	float salary;
}Semp;
int main()
{
	printf("Size of struct=%d byte\n",sizeof(Semp));
	printf("Size of union=%d byte",sizeof(Uemp));
	return 0;

}
