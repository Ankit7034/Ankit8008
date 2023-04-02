#include<stdio.h>
main()
{
	float p,r,t,a;
	printf("Enter the principle value :");
	scanf("%f",&p);
	printf("Enter the rate :");
	scanf("%f",&r);
	printf("Enter the year :");
	scanf("%f",&t);
	
	a = (p*r*t)/100;
	printf("total value of simple interest is : %f",a);
	
}
