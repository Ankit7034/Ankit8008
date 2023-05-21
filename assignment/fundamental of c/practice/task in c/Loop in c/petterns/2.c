#include<stdio.h>
main()
{
      /*       * * * * *
               * * * *
               * * *
               * *
               *             */
               
int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
