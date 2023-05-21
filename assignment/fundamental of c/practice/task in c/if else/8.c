#include<stdio.h>
main()
{ 
    // check the greatest number.
	int num1,num2,num3;
	printf("enter the number :");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num1>num2 && num1>num3){
		printf("the 1st number is greatest");
	} else if(num2>num3 && num2>num1){
		printf("the 2nd number is greatest");
	} else if(num3>num1 && num3>num2){
		printf("the 3trd number is greatest");
	} else{
		printf("not valid");
	}
}
