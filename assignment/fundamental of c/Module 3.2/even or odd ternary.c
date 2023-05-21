#include<stdio.h>
main()
{
	// even or odd using ternary operator.
	
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	
	num%2==0 ? printf("Even") : printf("odd");
}
