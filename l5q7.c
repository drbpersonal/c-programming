main()
{
	int mat[2][3],i,j,sum;
	printf("Enter matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n Your matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+mat[i][j];
		}
	}
	printf("sum=%d",sum);
	
	return 0;
}
