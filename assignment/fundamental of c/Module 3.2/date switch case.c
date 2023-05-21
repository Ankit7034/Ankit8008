#include<stdio.h>
main()
{
	// monday to sunday using switch case.
	
	int n;
	printf("Enter the date :");
	scanf("%d",&n);
	

	switch  (n)
	{
		case 1 : 
		printf("monday \n ");
		break;
		
		case 2 : 
		printf("tuesday \n");
		break;
		 
		case 3 : 
		printf("wendsday \n ");
		break;
		
		case 4 :
		printf("thusday \n");
		break;
		
		case 5 :
		printf("friday \n");
		break;
		
		case 6 :
		printf("satrday \n");
		break;
		
		case 7 :
		printf("sunday \n");
		break;
		
		default :
		printf("invalid date");
		break;	
					
	}	
	
} 






