#include<stdio.h>
int main()
{
  int n,sum=0;
  n=1;
  //printf("enter number");
 // scanf("%d",&n);
  
  while(n<=10)
  {
  	if(n%2==0)
  	{
  		sum=sum+n;
	  }
  //	rem=n%10;
  
  //	sum=sum+rem;
  	//n=n/10;
  	n++;
   }
    printf("sum=%d",sum);

    return 0;
  }


