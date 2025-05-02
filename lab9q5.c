#include<stdio.h>
int main()
{
	int i,roll[5],mark[5];
	char name;
	FILE *fp;
	fp=fopen("d://ncc1.txt","a");
	if(fp==NULL)
	{
		printf("File banena...\n");
	}
	else
	{
		printf("File banyo...\n");
	}
	for(i=0;i<3;i++)
	{
		printf("Enter Name,Roll and marks:");
		scanf("%s%d%d",&name,&roll[i],&mark[i]);
		fprintf(fp,"%s\t\t%d\t\t%d\n",name,roll[i],mark[i]);
	}
	return 0;

}
