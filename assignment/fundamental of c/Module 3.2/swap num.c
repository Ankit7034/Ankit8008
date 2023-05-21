#include<stdio.h>
main()
{    
     // swap number without using third variable.
     
	int a,b;
	printf("Enter the number :");
	scanf("%d %d",&a,&b);
	
	printf("\nbefore swapping\n ");
	printf("a=%d , b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\nafter swapping\n ");
	printf("a=%d , b=%d",a,b);
}
