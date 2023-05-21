                    // without peramiter without return

#include<stdio.h>
void add();
void sub();
void mul();
void div();
  

void main()
 {
 	add();
 	
  	sub();
  	
  	mul();
  	
  	div();
  	
  }
   
 void add()
 
 {
 	int a,b;
 	printf("------the addition------\n ");
 	printf("Enter the number :");
 	scanf("%d",&a);
 	printf("Enter the number :");
 	scanf("%d",&b);
 	
 	printf("the addition is : %d\n",a+b);
 	
 
 }  
  void sub()
  {
  	int a,b;
  	printf("\n--------the substraction--------\n");
 	printf("Enter the number :");
 	scanf("%d",&a);
 	printf("Enter the number :");
 	scanf("%d",&b);
 	
 	printf("the substraction is : %d\n",a-b);
  }
  void mul()
  {
  	int a,b;
  	printf("\n--------the multiplication--------\n");
 	printf("Enter the number :");
 	scanf("%d",&a);
 	printf("Enter the number :");
 	scanf("%d",&b);
 	
 	printf("the multiplication is : %d\n",a*b);
  }
  
  void div()
  {
  	int a,b;
  	printf("\n--------the divition--------\n");
 	printf("Enter the number :");
 	scanf("%d",&a);
 	printf("Enter the number :");
 	scanf("%d",&b);
 	
 	printf("the divition is : %d\n",a/b);
  }
