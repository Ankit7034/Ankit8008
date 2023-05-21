#include<stdio.h>
main()
{
                            /*     *********
                                   **** ****
                                   ***   ***
                                   **     **
                                   *       *          */
                                   

    int i,j,k,n;
	printf("Enter the number :");
	scanf("%d",&n);
	int nsp = 1;
	int nst = n;
	
	for(i=1; i<=2*n+1; i++) // this loop print first star line
	{
		printf("*");
	}
	  printf("\n");
	  
	for (i=1; i<=n; i++)   
	{
		for(j=1; j<=nst; j++)   //this loop print first 4 stars
		{
			printf("*");
		}
		
		for(k=1; k<=nsp; k++)  // this loop print spaces
		{
			printf(" ");
		}
		 for(j=1; j<=nst; j++)   // this loop print after spece 4 stars
		{
			printf("*");
		}
		 nst--;
		 nsp+=2;
		  
		printf("\n");
	}
}
