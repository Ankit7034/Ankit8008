#include<stdio.h>
main()
{
	// year into days and day into year.
	
	int years,days;
	printf("enter the year :");
	scanf("%d",&years);
	
	days=years*365;
	
	printf("days are %d",days);
	
	
	
	int year,day;
	
	printf("\n\nenter the days :");
	scanf("%d",&day);
	
	year=(day/365);
	
	printf("\n%d year",year);
	
}
