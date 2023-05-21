#include<stdio.h>
main()
{                 
              /*          * * * * *
                           * * * *
                            * * *
                             * *
                              *           */

int i,j,k,n,a=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=a;k++)
		{
			printf(" ");
		}
		a++;
		for(j=1;j<=n+1-i;j++)
		{
			printf(" *");
		}
		printf("\n");
		
	}
}
