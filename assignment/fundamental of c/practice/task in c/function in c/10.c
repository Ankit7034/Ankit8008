                   //sum of natural numbers

#include<stdio.h>
int num(int n)
{
	
	if (n==1)
	{
		return 1;
	} else if(n<100) 
	  {
	  	return n+num(n+1);
	  }
       
}

int main()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	printf("The sum is : %d",num(n));
    
	  
	
}
