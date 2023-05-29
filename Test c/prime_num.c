#include<stdio.h>
int main()
{
	int n,i,a=0;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
		  a++;
		}
	}
	
	if(a==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
