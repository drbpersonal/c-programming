#include<stdio.h>
struct student
{
	int sn;
	char name[50];
	struct
	{
		int cp;
		int fot;
		int mt;
	}mark;
}std[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("Enter sn:");
	scanf("%d",&std[i].sn);
	printf("Enter cp marks:");
	scanf("%d",&std[i].mark.cp);
	}
		for(i=0;i<5;i++)
		{
				printf("SN:%d\n CP:%d\nFot=%d\nMT=%d\n",std[i].sn,std[i].name,std[i].mark.cp,std[i].mark.fot,std[i].mark.mt);

		}

	return 0;
}

