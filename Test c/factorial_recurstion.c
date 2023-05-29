#include<stdio.h>
int num(int n)
{
	if(n<=0)
	{
		return 1;
	}
	else
	{
		return n*num(n-1);
	}
}

int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("The factorial is :%d",num(n));
}
