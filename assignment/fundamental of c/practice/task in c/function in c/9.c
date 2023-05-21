                    //print 1 to 10 natural numbers

#include<stdio.h>
int num(int n)
{
	if(n<=10)
	{
		printf("%d\n",n);
	  return num(n+1);
	}
       
}

int main()
{
	int n=1;

	num(n);
    
	
}
