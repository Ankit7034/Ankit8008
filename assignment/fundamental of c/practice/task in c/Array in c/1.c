#include<stdio.h>
main()
{ 
    //sum of array
    
	int a[10],i,sum=0;
	for(i=0; i<10; i++)
	{
		printf("Enter the number :");
		scanf("%d",&a[i]);
	}
		for(i=0; i<10; i++)
		{
			printf("%d",a[i]);
		    sum+=a[i];
		}
		
		printf("The sum is : %d",sum);
	
} 
