//Return value no argument
int add(int a,int b);
main()

{
	int x,y,ncc;
	printf("Enter two number");
	scanf("%d%d",&x,&y);
	ncc=add(x,y);
	printf("Sum=%d",ncc);
	return 0;
}
int add(int a,int b)
{
	int sum;
	sum=a+b;
	
	return sum;
}
