                //with perameter and with return

#include<stdio.h>
void area();
float circle(float pi,float r)
{
 	
    return 3.14*r*r;
	 
 }
float rectangle(float l,float w)
 {
 	
 	
    return l*w;
 }
float triangle(float b,float h)
{
	
 	

    return b*h/2;
 
}


void main()
{
	area();
	
	float choice;
 	printf("enter your choice number :");
 	scanf("%f",&choice);
 	if(choice==1){
 		
 		float pi,r;
	printf("---your choise is circle---\n");
 	printf("Enter the redias :");
 	scanf("%f",&r);
	
	printf("The area of circle is :%f\n\n",circle(pi,r));
 	}
	

 
 	if(choice==2){
 	
	float l,w;
	printf("---your choise is rectangle---\n");
 	printf("Enter the legth :");
 	scanf("%f",&l);
 	printf("Enter the width :");
 	scanf("%f",&w);
	printf("The area of rectangle is :%f\n\n",rectangle(l,w));
 	}
	
 	if(choice==3){
 		
     	float b,h;
		printf("---your choise is triangle---\n");
 	printf("Enter the base :");
 	scanf("%f",&b);
 	printf("Enter the hight :");
 	scanf("%f",&h);
	printf("The area of triangle is :%f",triangle(b,h));
   }
}
  void area()
  {
  	printf("===========Area Finder===========\n");
  	printf("\t1. Circle \n \t2. rectangle \n \t3. triangle\n\n");
  	
  }
 

