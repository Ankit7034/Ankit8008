#include<stdio.h>
int sum();
int main()
{
	int total;
	total=sum();
	printf("the sum is :%d",total);
}
 int sum()
 {
 	int a,b;
 	printf("Enter the number :");
 	scanf("%d,%d",&a);
 	printf("Enter the number :");
 	scanf("%d,%d",&b);
 	return a+b;
 }
