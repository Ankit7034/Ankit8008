#include<stdio.h>
main()
{
	// swap number without using third veriable
	
	int a,b,c;
	printf("Enter the number :");
	scanf("%d %d",&a,&b);
	printf("before swapping numbers :\n");
	printf("a=%d  b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swapping numbers :\n");
	printf("a=%d  b=%d",a,b);
	
}
