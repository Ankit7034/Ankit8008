#include<stdio.h>
main()
{
	//factorial 
	
	int i,n,fact;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
		
	}
	   printf("\n total value of factorial  %d is : %d",n,fact);

}
