#include<stdio.h>
main()
{
	  /* A
        BCD
       EFGHI
      JKLMNOP  */
		                   
	int i,j,k,n;
	char ch = 'A';
	printf("Enter the number :");
	scanf("%d",&n);
	int nsc = 1;
	int nsp = n-1;
	for (i=1; i<=n; i++)   
	{
		for(j=1; j<=nsp; j++)   // you can use j<=n-i for space
		{
			printf(" ");
		}
		nsp--;
		for(k=1; k<=nsc; k++)  // for(k=1; k<=2*i-1; k++)
		{
			printf("%c",ch);
			ch++;
		}
		  nsc = nsc + 2;
		printf("\n");
	}
}
