#include<stdio.h>
main()
{ 
    // check which quadrent the coordinate point lies.
	int num1,num2;
	printf("enter the number :");
	scanf("%d %d",&num1,&num2);
	
	if(num1>0 && num2>0){
		printf("the cordinate point (%d %d) lies in the first cuandrant",num1,num2);
	} else if(num1<0 && num2>0){
	printf("the cordinate point (%d %d) lies in the second cuandrant",num1,num2);
	} else if(num1>0 && num2<0){
	printf("the cordinate point (%d %d) lies in the third cuandrant",num1,num2);
		}else if(num1<0 && num2<0){
		printf("the cordinate point (%d %d) lies in the fourth cuandrant",num1,num2);
		}else if(num1==0 && num2==0){
		printf("the cordinate point (%d %d) lies in the origin",num1,num2);
	  } 
       
    
} 
