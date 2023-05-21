#include<stdio.h>
main()
{
	int a=9 , b=7 , c=5 , d=7 , f=17 , g=6 , sum1 , sum2;
	// 1) how many tiles are needed.
	
	sum1 = (a*b + b*c);
	
	printf("tiles are needed is : %d",sum1);
	printf("\n");
	// 2) you buy 17 package of tiles containing 6 tiles each. how many tiles will be left over.?
	
	sum2 = ((f*g) - (a*b + b*c) );
	
	printf("the tiles left over is : %d",sum2); 
}
