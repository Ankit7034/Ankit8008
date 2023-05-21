#include<stdio.h>
main()
{
	//Even and Odd 
	
	int oe[10],e=0,o=0,i,esum=0,osum=0;
	for(i=0; i<10; i++)
	{
		printf("Enter the number :");
		scanf("%d",&oe[i]);
		
		
	}
	
	for(i=0; i<10; i++)
		{
			if(oe[i]%2==0)
		{
			e++;
			esum+=oe[i];
		} else
		{
			o++;
			osum+=oe[i];
		}
		
			
		   
		}
		printf("\nThe Even number is : %d",e);
		printf("\nThe Odd number is : %d",o);
		printf("\nThe Even sum is : %d",esum);
		printf("\nThe Odd sum is : %d",osum);
}
