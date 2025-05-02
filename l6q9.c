//Return value no argument
int add();
main()

{
	int ncc;
	ncc=add();
	printf("Sum=%d",ncc);
	return 0;
}
int add()
{
	int a,b,sum;
	printf("Enter two number");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
}
