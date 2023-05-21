#include<stdio.h>
main()
{
/*	123456789
    1234 6789
    123   789
    12     89
    1       9  */
    
    int i,j,k,n,a;
	printf("Enter the number :");
	scanf("%d",&n);
	int nsp = 1;
	int nst = n;
	for(i=1; i<=2*n+1; i++) // this loop print first star line
	{
		printf("%d",i);
	}
	  printf("\n");
	  
	for (i=1; i<=n; i++)   
	{ 	a = 1;
		for(j=1; j<=nst; j++)   //this loop print numbers
		{
			printf("%d",a);
			a++;
		}
		
		for(k=1; k<=nsp; k++)  // this loop print spaces
		{
			printf(" ");
			a++;
		}
		 for(j=1; j<=nst; j++)   // this loop print a numbers
		{
			printf("%d",a);
			a++;
		}
		 nst--;
		 nsp+=2;
		  
		printf("\n");
	}
}

