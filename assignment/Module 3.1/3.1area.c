#include<stdio.h>
main()
{   
    //Q3 find area of circle , rectangle , triangle.
    
    printf("circle\n");
	float pi,r;
	printf("Enter the pi value :");
	scanf("%f",&pi);
	
	printf("Enter the r value :");
	scanf("%f",&r);
	
	printf("total circle value is %f",pi*r*r);
	
	
	
	printf("\n\n rectangle\n");
	float length,breadth;
	printf("Enter the length value :");
	scanf("%f",&length);
	
	printf("Enter the breadth value :");
	scanf("%f",&breadth);
	
	printf("total rectangle value is : %f",length*breadth);
	
	
	printf("\n\n triangle\n");
	float b,h,a;
	printf("Enter the base value :");
	scanf("%f",&b);
	printf("Enter the height value :");
	scanf("%f",&h);
	
	a=(b*h)/2;
	printf("total triangle value is :%f",a);
	
}
