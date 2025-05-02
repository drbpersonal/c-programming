#include<stdio.h>
int main()
{
	int n;
	FILE *fp;
	fp=fopen("d://ncc1.txt","r");
	if(fp==NULL)
	{
		printf("File banena...\n");
	}
	else
	{
		printf("File banyo...\n");
	}
	fscanf(fp,"%d",&n);
	printf("\nNumber=%d",n);
	
	return 0;
}
