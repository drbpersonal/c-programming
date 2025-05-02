 //WAP to calculate sum of series x=1/1! + 2/2! + 3/3!+_  _ _ _ _ _ +n/n!
 
 #include<stdio.h>
 int main()
 {
 	float n,i,j,fact=1,sum=0;
 	printf("Enter the number:");
 	scanf("%f",&n);
 	for(i=1;i<=n;i++)
 	{
 		for(j=1;j<=i;j++)
 		{
 			fact=fact*j;
		 }
		 sum=sum+(i/fact);
	 }
	 printf("Sum=%f",sum);
	 return 0;
 }
