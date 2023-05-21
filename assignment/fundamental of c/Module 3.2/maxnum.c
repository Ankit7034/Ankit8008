#include<stdio.h>
#include<limits.h>

int main()
{
	int max,i,n;
	max=INT_MIN;
	for(i=1; i<=4; i++)
	{
		printf("Enter the number :");
		scanf("%d",&n);
		
		if(max<n)
		{
			max=n;
		}
		
	}
		printf("the max number is :%d",max);
}
