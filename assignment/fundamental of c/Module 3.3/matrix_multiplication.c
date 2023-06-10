#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	printf("Enter the first row number :");
	scanf("%d",&r1);
	printf("Enter the first colum number :");
	scanf("%d",&c1);
	
	printf("Enter the second row number :");
	scanf("%d",&r2);
	printf("Enter the second colum number :");
	scanf("%d",&c2);
	
	int a[r1][c1],b[r2][c2],res[r1][c2];
	int i,j,k;
	printf("\n-> Enter the first matrix\n");
	for(i=0; i<r1; i++)
	{
	    for(j=0; j<c1; j++)
			{
				printf("Enter the elements :");
				scanf("%d",&a[i][j]);
			}
	}
	
	printf("\n->Enter the second matrix\n");
	for(i=0; i<r2; i++)
	{
	    for(j=0; j<c2; j++)
			{
				printf("Enter the elements :");
				scanf("%d",&b[i][j]);
			}
	 		
	}
	
	printf("\n<=====First matrix=====>\n");
	for(i=0; i<r1; i++)
	{
	    for(j=0; j<c1; j++)
			{
               printf("%d  ",a[i][j]);
			}
				printf("\n");
	}
	
	printf("\n<=====Second matrix=====>\n");
	for(i=0; i<r2; i++)
	{
	    for(j=0; j<c2; j++)
			{
               printf("%d  ",b[i][j]);
			}
			printf("\n");
	}
	
	for(i=0; i<r1; i++)
	{
	    for(j=0; j<c2; j++)
			{
				res[i][j]=0;
				for(k=0; k<r2; k++)
				{
					res[i][j]+=a[i][k] * b[k][j];
				}
			}
	}
	
	printf("\n<==== result matrix ====>\n");
	for(i=0; i<r1; i++)
	{
	    for(j=0; j<c2; j++)
			{
				printf("%d  ",res[i][j]);
			}
			
	    printf("\n");
	}
	
}
