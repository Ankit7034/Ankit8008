#include<stdio.h>
main()
{
	// check the number even or odd.
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("the number is even");
	} else{
		printf("the number is odd");
	}
}
