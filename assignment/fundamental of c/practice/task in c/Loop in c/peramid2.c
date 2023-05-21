#include<stdio.h>
main()
{
	                      /*   *
                              ***
                             *****
                            *******
                           *********   */
                           
	int i,j,k,n;
	printf("Enter the number :");
	scanf("%d",&n);
	int nst = 1;
	int nsp = n-1;
	for (i=1; i<=n; i++)   
	{
		for(j=1; j<=nsp; j++)   
		{
			printf(" ");
		}
		nsp--;
		for(k=1; k<=nst; k++)  
		{
			printf("*");
		}
		  nst = nst + 2;
		printf("\n");
	}
}
