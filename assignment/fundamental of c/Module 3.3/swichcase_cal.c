#include<stdio.h>
main()
{
	// calculator using swichcase
	int n,num1,num2;
    printf("+,-,*,/ :");
	scanf("%d",&n);
	
	
	switch (n)
	{
		case 1 :
			printf("Enter the number :");
			scanf("%d",&num1);
			printf("Enter the number :");
			scanf("%d",&num2);
			printf("The addition is :%d ",num1+num2);
			break;
			
		case 2 :
		    printf("Enter the number :");
			scanf("%d",&num1);
			printf("Enter the number :");
			scanf("%d",&num2);
			printf("The substraction is :%d ",num1-num2);
			break;	
			
		case 3 :
		    printf("Enter the number :");
			scanf("%d",&num1);
			printf("Enter the number :");
			scanf("%d",&num2);
			printf("The multiplication is :%d ",num1*num2);
			break;
			
		case 4 :
		    printf("Enter the number :");
			scanf("%d",&num1);
			printf("Enter the number :");
			scanf("%d",&num2);
			printf("The divition is :%d ",num1/num2);
			break;
			
		default :
		 printf("Invalid input");
		 break;	
    }

}
