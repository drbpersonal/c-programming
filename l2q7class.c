//l2q7 Wap to check  Whether the value is true or not using logical operator
#include<stdio.h>
int main()
{
	int a=5,b=7,c=8,res;
	//res=(a>b)&&(b<c);
	res=(a<b) && (b<c);
	printf(" AND res=%d",res);
	res=(a>b) || (b<c);
	
	printf("\n OR res=%d",res);
	res=(a!=b);
	//res=(a==b);
	//res=!(a=b);
	printf("\n NOT res=%d",res);
	/*result=(a==b )&&(c>b)
	printf("(a==b) &&")*/
	return 0;
}
