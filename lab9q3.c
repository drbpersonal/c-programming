#include<stdio.h>
int main()
{
	int n;
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
	fprintf(fp,"\n NCC");
	
	return 0;
}
