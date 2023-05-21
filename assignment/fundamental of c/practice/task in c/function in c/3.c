                    //without perameter and without return

#include<stdio.h>
void area();
void circle();
void rectangle();
void triangle();

void main()
{
	int choice;
	area();
	printf("Enter the choice  :");
	scanf("%d",&choice);
	if(choice==1){
     circle();
}
		
    if(choice==2){
    	
		rectangle();
	}
    if(choice==3)
	{
	      triangle();
}
    
}
  void area()
  {
  	printf("===========Area Finder===========\n");
  	printf("\t1. Circle \n \t2. rectangle \n \t3. triangle\n\n");
  }

void circle()
{
	float pi,r;
	printf("---your choise is circle---\n");
 	printf("Enter the redias :");
 	scanf("%f",&r);

 	printf("the value of circle is : %f\n",3.14*r*r);
}
void rectangle()
{
	float l,w;
	printf("---your choise is rectangle---\n");
 	printf("Enter the legth :");
 	scanf("%f",&l);
 	printf("Enter the width :");
 	scanf("%f",&w);

 	printf("the value of rectangle is : %f\n",l*w);
}
void triangle()
{
	float b,h;
		printf("---your choise is triangle---\n");
 	printf("Enter the base :");
 	scanf("%f",&b);
 	printf("Enter the hight :");
 	scanf("%f",&h);

 	printf("the value of triangle is : %f\n",b*h/2);
}
