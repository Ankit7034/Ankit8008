#include<stdio.h>
main()
{
	// Q1 display this information using printf.
	
	printf("Name        :  Vaghela ankitsinh\n");
	printf("birth date  :  15/7/2001 \n");
	printf("Age         :  22 \n");
	printf("Address     :  Bopal");
	
	
	
	
	//Q2 simple calculator to make addition , subtraction , multiplication , division and modulo.
	printf("\n\n1)addition\n");
	int num1,num2;
	printf("Enter the number :");
	scanf("%d",&num1);
	
	printf("Enter the number :");
	scanf("%d",&num2);
	
	num1+=num2;
	printf("total value: %d",num1);
	
	
	printf("\n\n2)subtraction\n");
	int num3,num4;
	printf("Enter the number :");
	scanf("%d",&num3);
	
	printf("Enter the number :");
	scanf("%d",&num4);
	
	num3-=num4;
	printf("total value: %d",num3);
	
	
	
	printf("\n\n3)multiplication\n");
	float num5,num6;
	printf("Enter the number :");
	scanf("%f",&num5);
	
	printf("Enter the number :");
	scanf("%f",&num6);
	
	num5*=num6;
	printf("total value: %f",num5);
	
	
	printf("\n\n4)divition\n");
	float num7,num8;
	printf("Enter the number :");
	scanf("%f",&num7);
	
	printf("Enter the number :");
	scanf("%f",&num8);
	
	num7/=num8;
	printf("total value: %f\n",num7);
	
	
	printf("\n\n4)modulo\n");
	int a,x,y;
	printf("Enter the number :");
	scanf("%d",&x);
	printf("Enter the number :");
	scanf("%d",&y);
	
	a = x % y;
	printf("Remainder %d %d is %d\n",x,y,a);
	
	
	
	
}
