main()
{
int arr[]={1,3,7,15,22,23,15,7},key,flag=0,i;
printf("Enter key:");
scanf("%d",&key);
for(i=0;i<8;i++)
{
	if(key==arr[i])
	{
		flag=1;
		break;
	}
}
	if(flag==1)
	{
		printf("found");
	}
	else
	{
		printf("Not found");
	}
	return 0;
}
