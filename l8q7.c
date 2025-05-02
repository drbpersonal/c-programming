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
}std;
int main()
{
	printf("Enter sn:");
	scanf("%d",&std.sn);
	printf("Enter cp marks:");
	scanf("%d",&std.mark.cp);
	printf("SN:%d\n CP:%d",std.sn,std.mark.cp);
	return 0;
}
