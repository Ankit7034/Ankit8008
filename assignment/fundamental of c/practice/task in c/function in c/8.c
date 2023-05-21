#include<stdio.h>
int board()
{
	printf("\t==========Choice Board==========\n\n");
	printf("\t1. Addition\n \t2. Substraction\n \t3. Multiplication\n \t4. divition\n \t5. Modulo\n \t6. Exit\n");
}

int add(int a,int b)
{
	return a+b;
}

int sub(int c,int d)
{
	return c-d;
}

float mul(float e,float f)
{
	return e*f;
}

float div(float g,float h)
{
	return g/h;
}

int mod(int i,int j)
{
	return i%j;
}

int main()
{
	int choice;
	char ch;
	do
	{
	
	board();
	
	printf("Enter your choice :");
	scanf("%d",&choice);
	if(choice==1){
	int a,b;
	printf("\nEnter the first number :");
 	scanf("%d",&a);
 	printf("Enter the second :");
 	scanf("%d",&b);
	
	
	 printf("Your ans :%d\n",add(a,b));
	}
	
	
	else if(choice==2){
	int c,d;
	printf("\nEnter the first number :");
 	scanf("%d",&c);
 	printf("Enter the second :");
 	scanf("%d",&d);
	
	
	 printf("Your ans :%d\n",sub(c,d));
	}
	
	else if(choice==3){
	float e,f;
	printf("\nEnter the first number :");
 	scanf("%f",&e);
 	printf("Enter the second :");
 	scanf("%f",&f);
	
	
	 printf("Your ans :%f\n",mul(e,f));
	}
	
	else if(choice==4){
	float g,h;
	printf("\nEnter the first number :");
 	scanf("%f",&g);
 	printf("Enter the second :");
 	scanf("%f",&h);
	
	
	 printf("Your ans :%f\n",div(g,h));
	}
	
	else if(choice==5){
	int i,j;
	printf("\nEnter the first number :");
 	scanf("%d",&i);
 	printf("Enter the second :");
 	scanf("%d",&j);
	
	
	 printf("Your ans :%d\n",mod(i,j));
	}
	
	else if(choice==6){
		
		break;
	}
	else
	{
		printf("=====Invalid input=====");
	}
	
	  printf("\n Do you what anything else [y/n] :");
      scanf("%s",&ch);
}  

   while(ch=='y' || ch=='Y');
	{
		if(ch=='n' || ch=='N')
		{
			
			
		}
		else 
		{
			printf("\n --Your input incorrect--\n");
		}
	}
	
}
