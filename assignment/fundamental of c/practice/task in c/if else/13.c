#include<stdio.h>
main()
{
	int phy,ch,maths,ca,bio;
	float per;
	
	
	printf("Enter the number :");
	scanf("%d",&phy);
	printf("Enter the number :");
	scanf("%d",&ch);
	printf("Enter the number :");
	scanf("%d",&maths);
	printf("Enter the number :");
	scanf("%d",&ca);
	printf("Enter the number :");
	scanf("%d",&bio);
	per = (phy+ch+maths+ca+bio)/5.0;
	printf("\nthe candidate percentage : %f\n",per);
	
	if(per>=90)
	{
		printf("A+");
	} else if(per>=70 && per<90){
		printf("A");
	}else if(per>=60 && per<70){
		printf("B");
	}else if(per>=35 && per<60){
		printf("pass");
	}else{
		printf("Fail");
	}
	
	
}
