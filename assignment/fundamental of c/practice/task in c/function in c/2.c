                   // With perameter and without return

#include<stdio.h>
void add(int a,int b);
void sub(int c,int d);
void mul(int e,int f);
void div(int g,int i);


void main()
 {
 	int a,b,c,d,e,f,g,i;
 	printf("------the addition------\n ");
 	printf("Enter the number :");
 	scanf("%d",&a);
 	printf("Enter the number :");
 	scanf("%d",&b);
 	add(a,b);
 	
 	printf("------the subtraction------\n ");
 	printf("Enter the number :");
 	scanf("%d",&c);
 	printf("Enter the number :");
 	scanf("%d",&d);
  	sub(c,d);
  	
  	printf("------the multiplication------\n ");
 	printf("Enter the number :");
 	scanf("%d",&e);
 	printf("Enter the number :");
 	scanf("%d",&f);
  	mul(e,f);
  	
  	printf("------the divition------\n ");
 	printf("Enter the number :");
 	scanf("%d",&g);
 	printf("Enter the number :");
 	scanf("%d",&i);
  	div(g,i);
  }
  	
   
 void add(int a,int b)
 
 {
 	
 	
 	printf("the addition is : %d\n",a+b);
 	
 
 }  
  void sub(int c,int d)
  {
  	
 	
 	printf("the substraction is : %d\n",c-d);
  }
  void mul(int e,int f)
  {
  	
 	printf("the multiplication is : %d\n",e*f);
  }
  
  void div(int g,int i)
  {
  
 	printf("the divition is : %d\n",g/i);
  }
