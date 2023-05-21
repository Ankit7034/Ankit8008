#include<stdio.h>
main()
{
	
	int n,m;
	printf("Enter the number :");
	scanf("%d",&m);
	
	if(m!=0){
		if(m>0){
			n=1;
		} else{
			n=-1;
		}
	} else {
		n=0;
	}
		printf("the value of m = %d\n",m);
		printf("the value of n = %d\n",n);
}
