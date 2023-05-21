                      // with perameter and without return

#include<stdio.h>
void area();
void circle(float p,float r);
void rectangle(float l,float w);
void triangle(float b,float h);

void main()
{
	int choice;
	float p,r,l,w,b,h;
	area();
	
	printf("Enter the choice  :");
	scanf("%d",&choice);
	
	if(choice==1){
 	printf("Enter the redias :");
 	scanf("%f",&r);
     circle(p,r);
	}

		
    if(choice==2){
    	printf("Enter the legth :");
 	scanf("%f",&l);
 	printf("Enter the width :");
 	scanf("%f",&w);
		rectangle(l,w);
	}
	
    if(choice==3){
	
		printf("Enter the base :");
 	scanf("%f",&b);
 	printf("Enter the hight :");
 	scanf("%f",&h);
	      triangle(b,h);
	}

    
}
  void area()
  {
  	printf("===========Area Finder===========\n");
  	printf("\t1. Circle \n \t2. rectangle \n \t3. triangle\n\n");
  }

void circle(float p,float r)
{
	

 	printf("the value of circle is : %f\n",3.14*r*r);
}
void rectangle(float l,float w)
{


 	printf("the value of rectangle is : %f\n",l*w);
}
void triangle(float b,float h)
{
	

 	printf("the value of triangle is : %f\n",b*h/2);
}
