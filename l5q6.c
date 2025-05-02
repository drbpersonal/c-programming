main()
{
	int mat[2][2],i,j;
	printf("Enter matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n Your matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
