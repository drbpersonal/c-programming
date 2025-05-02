
main()
{
	int i,j,n,temp;
	printf("Enter how many number:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n-1;i++)
   {
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}

	}
	printf("Assending Order\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
			printf("\nDesending Order\n");
				for(i=n-1;i>=0;i--)
				{
					printf("%d\t",a[i]);
				}
				return 0;

			

		


	
}
