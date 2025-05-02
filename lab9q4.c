#include<stdio.h>
int main()
{
	//int i,roll,mark;
	int i;
	char name[50];
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
	printf(fp,"Name\t\tRoll\t\tMark");
	for(i=0;i<3;i++)
	{
		printf("Enter Name:");
		//scanf("%s%d%d",&name,&roll,&mark);
		scanf("%s",&name);
        //fprintf(fp,"%s\t\t%d\t\t%d\n",name,roll,mark);
        fprintf(fp,"%s\n",name);

	}
	return 0;

}
