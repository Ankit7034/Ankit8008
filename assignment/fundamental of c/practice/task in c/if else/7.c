#include<stdio.h>
main()
{ 
    // check the person hight in centimeter.
	int n;
	printf("enter the hight :");
	scanf("%d",&n);
	
	if(n<140){
		printf("small person");
	} else if(n>155 && n<180){
		printf("average person");
	} else if(n>180 && n<=220){
		printf("tall person");
	} else{
		printf("abnormal");
	}
}
