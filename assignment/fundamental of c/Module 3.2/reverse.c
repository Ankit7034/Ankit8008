#include<stdio.h>
main()
{
	int i,n,a;
	printf("enter the number :");
	scanf("%d",&n);
	
		while(n>0){
		a = n%10;
		printf("%d",a);
		n = n/10;
		}
		  
	
}
