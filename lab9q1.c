#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("d://ncc1.txt","w");
	if(fp==NULL)
	{
		printf("File banena...\n");
	}
	else
	{
		printf("File banyo...\n");
	}
	fprintf(fp,"We love NCC");
	
	return 0;
}
