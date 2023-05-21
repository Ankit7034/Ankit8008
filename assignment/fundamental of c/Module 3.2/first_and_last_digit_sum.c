#include<stdio.h>
int main()
{
	int i=1,n,l,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	l = n%10;
	while(n>9)
	{
		n=n/10;
		sum=l+n;
	}
	printf("The first and last number sum is :%d",sum);
}
