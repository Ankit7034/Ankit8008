#include<stdio.h>
int menu()
{
	printf("\tSrno.\t item\t     price\n");
	printf("\t1.\t Pizza\t      90/-\n");
	printf("\t2.\t Burger\t      89/-\n");
	printf("\t3.\t Pani-puri    100/-\n");
	printf("\t4.\t Dosa\t      80/-\n\n\n");
	return 0;
}
int pizza(int a)
{
	int Q,p;
	printf("\nYour item : Pizza\n");
	printf("Enter Quantity :");
	scanf("%d",&Q);
	p = 90 * Q;
	return p;
}
int burger(int b)
{
	int Q,p;
	printf("\nYour item : Burger\n");
	printf("Enter Quantity :");
	scanf("%d",&Q);
	p = 89 * Q;
	return p;
}
int panipuri(int c)
{
	int Q,p;
	printf("\nYour item : Panipuri\n");
	printf("Enter Quantity :");
	scanf("%d",&Q);
	p = 100 * Q;
	return p;
}
int dosa(int d)
{
	int Q,p;
	printf("\nYour item : Dosa\n");
	printf("Enter Quantity :");
	scanf("%d",&Q);
	p = 80 * Q;
	return p;
}



int main()
{
	
	int choice,total,amt;
	char ch;
	do
	{
	menu();
	
	printf("Enter your choice :");
	scanf("%d",&choice);
	if(choice==1){
	int a;
	 amt = pizza(a);
	 printf("\nTotal price : %d",amt);
	 total+=amt;
	 
	}
	
	else if(choice==2){
	int b;
	 amt = burger(b);
	 printf("\nTotal price : %d",amt);
	 total+=amt;
	
	 
	}
	
	else if(choice==3){
	int c;
	 amt = panipuri(c);
	 printf("\nTotal price : %d",amt);
	 total+=amt;
	
	 
	}
	
	else if(choice==4){
	int d;
	 amt = dosa(d);
	 printf("\nTotal price : %d",amt);
	 total+=amt;
		 
	}

      printf("\n Do you what anything else [y/n] :");
      scanf("%s",&ch);
 }
	while(ch=='y' || ch=='Y');
	{
		if(ch=='n' || ch=='N')
		{
			printf("Thank you\n");
			printf("Your total bill is : %d",total);
		}
		else 
		{
			printf("\n --Your input incorrect--\n");
		}
	}
	 
	

}
	

