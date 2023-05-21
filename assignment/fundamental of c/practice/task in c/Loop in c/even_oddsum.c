#include<stdio.h>
int main()
{
	int n,i,a,e=0,o=0,esum=0,osum=0;
	
	printf("take the number :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("Enter the number :");
	    scanf("%d",&a);
	    
	    if(a%2==0)
	    {
	    	e++;
	    	esum+=a;
		} 
		else
		{
			o++;
			osum+=a;
		}
	}
       printf("\n Even number is :%d\n",e);
       printf("\n Odd number is :%d\n",o);
       printf("\n Even sum  is :%d\n",esum);
       printf("\n Odd sum is :%d\n",osum);
       
}
