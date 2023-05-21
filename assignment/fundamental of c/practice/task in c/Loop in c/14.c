#include<stdio.h>
main()
{
  int i,a,j;
  printf("Enter the number :");
  scanf("%d",&a);
  for(i=1; i<=10;i++){
  	for(j=1; j<=a; j++){
  	printf("%d * %d = %d\t",j,i,i*j);
	  }
  	printf("\n");
  }
}
