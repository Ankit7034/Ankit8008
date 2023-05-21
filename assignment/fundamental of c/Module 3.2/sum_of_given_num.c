#include<stdio.h>
main()
{
	int i,n,a,sum=0;
	printf("enter the number :");
	scanf("%d",&n);
	
		while(n>0){
		a = n%10;
		sum+=a;
		n = n/10;
		}
		  
	printf("The sum of digits is :%d",sum);
}
