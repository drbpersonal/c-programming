main()
{
	int mat1[2][3],i,j,sum[2][3],mat2[2][3];
	printf("Enter first matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter second number:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("\n Matrix1\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix2:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("\n sum\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
