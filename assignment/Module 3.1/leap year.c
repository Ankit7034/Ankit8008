#include<stdio.h>
main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	
	   if(year%4==0)
	{
		printf("leap year");
	}
	   else if(year%100==0)
	{
		printf("not a leap year");
	}
	   else if(year%400==0)
	{
	   	printf("leap year");
	} 
	   else {
	   	printf("not a leap year");
	   }
}
