#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j;
	printf("----input first matrix----\n");
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++)
		{
			printf("Enter the number :");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("----input second matrix----\n");
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++)
		{
			printf("Enter the number :");
			scanf("%d",&b[i][j]);
		}
			printf("\n");
	}
	printf("----first matrix----\n");
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++)
		{
		  printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	printf("----second matrix----\n");
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++)
		{
		  printf("%d\t",b[i][j]);
		}
			printf("\n");
	}
	printf("----substraction of matrix----\n");
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++)
		{
		  printf("%d\t",a[i][j]-b[i][j]);
		}
			printf("\n");
	}
	
	printf("\n");
	
	
}
