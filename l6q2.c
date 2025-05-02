#include<stdio.h>
void add(int a,int b);//function declaration of prototype
void bikash(int a,int b);
void indra(int a,int b);
int main()
{
	int x,y;
	printf("Enter two number");
    scanf("%d%d",&x,&y);
    add(x,y);
    bikash(x,y);
    indra(x,y);
return 0;
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("add=%d\n",c);
}
void bikash( int a,int b)
{
	int c;
	c=a-b;
	printf("sub=%d\n",c);
	
}
void indra(int a,int b)
{
	int c;
	c=a*b;
	printf("mult=%d\n",c);
}
