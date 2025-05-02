
int small();
int main()
{
	int ncc;
	ncc=small();
	printf("Small=%d",ncc);
	return 0;
}
int small()
{
	int a,b;
	printf("Enter Two Number:");
	scanf("%d%d",&a,&b);
	if(a<b)
	return a;
	else
	return b;
	
}
