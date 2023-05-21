#include<stdio.h>
int main()
{
	int n,last,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	last = n%10;
	
	while(n>9)
	{
		n=n/10;
	   sum = n+last;
	}
	printf("The 1st and last digit is :%d",sum);
}
