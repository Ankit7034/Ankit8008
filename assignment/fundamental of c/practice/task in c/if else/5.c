#include<stdio.h>
main()
{
	// check the the given candidate eligible or not for vote.
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	if(n>=18){
		printf("the candidate is eligible for vote");
	
	} else{
		printf("the cnadidate not eligible for vote");
	}
}
