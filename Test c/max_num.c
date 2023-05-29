#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i;
	int max=INT_MIN;
	for(i=1; i<=5; i++)
	{
	printf("Enter the number :");
	scanf("%d",&n);
	if(max<n)
	{
		max=n;
  } 
   	}
	printf("The max number is :%d",max);
}
