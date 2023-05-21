#include<stdio.h>
main()
{
	int num1=12,num2=3;
	
	num1=num1+10;
	num2=++num1;
	num1--;
	--num2;
	num2=num1+10;
	
	printf("value of num1 : %d\n",num1);
		printf("value of num2 : %d",num2);
}
