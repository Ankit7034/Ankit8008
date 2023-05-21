#include<stdio.h>
main()
{
	// print table up to given numbers.
	
	int i,n;
	printf("Enter the number of table :");
	scanf("%d",&n);
	
	for (i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",i,n,i*n);
	}
	
}
