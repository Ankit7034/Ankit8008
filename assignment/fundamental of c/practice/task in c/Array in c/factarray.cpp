#include<stdio.h>
main()
{
	//
	int num[5],i,n,fact;
	for(i=0; i<5; i++)
	{
		printf("Enter the number : ");
		scanf("%d",&num[i]);
	}
	 for(i=0; i<5; i++)
	 {
	 	fact = fact*num[i];
	 	printf("%d",num[i]);
	 }
	 printf("\nfactorial is : %d",fact);
	
}
