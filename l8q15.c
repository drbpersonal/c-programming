/*Structure in Union
   Create union employee with name,age,salary.Display the info and explain the output*/
   #include<stdio.h>
   union employee
   {
   	char name[50];
   	int age;
   	float salary;
   }emp;
   int main()
   {
   	printf("Enter name:");
   	scanf("%s",emp.name);
   	printf("Enter age:");
   	scanf("%d",&emp.age);
   	printf("Enter salary:");
   	scanf("%f",&emp.salary);
   	printf("Name=%s\nAge=%d\nSalary=%f\n",emp.name,emp.age,emp.salary);
   	return 0;
   }

