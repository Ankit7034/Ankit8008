#include<stdio.h>
main()
{  /*  1
      121
     12321
    1234321
   123454321 */
   
	int i,n,j,k,q,a;
	printf("enter the number :");
	scanf("%d",&n);
	int nsp = n-1;
	for(i=1; i<=n; i++)
	{
		for(q=1; q<=nsp; q++){
			printf(" ");
		}
		nsp--;
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		 a = i - 1; 
		for(k=1;k<=i-1; k++)
		{
			printf("%d",a);
			a--;
		}
		 printf(" \n");
	}   
}
