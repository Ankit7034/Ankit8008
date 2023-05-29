#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number :");
	scanf("%d %d",&a,&b);
	printf("\nBefore swaping :\n");
	printf("a=%d,b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swaping :\n");
	printf("a=%d,b=%d",a,b);
}
