#include<stdio.h>
main()
{
	// check the the given year is leap year or not.
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	if(n % 400 == 0){
		printf("the year is leap year");
	} else if(n % 100 == 0){
		printf("the year is not a leap year");
	} else if(n % 4 == 0){
		printf("the year is leap year");
	} else{
		printf("the year is not a leap year");
	}
}
