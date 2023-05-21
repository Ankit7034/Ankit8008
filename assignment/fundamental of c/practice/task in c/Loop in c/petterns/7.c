#include<stdio.h>
main()
{
     /*  1
         1 1
         1 1 1
         1 1 1 1
         1 1 1 1 1   */
         
         
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",1);
		}
		printf("\n");
	}
}
