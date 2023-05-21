#include<stdio.h>
main()
{
	
     /*            1
                   0  0
                   1  1  1
                   0  0  0  0
                   1  1  1  1  1          */
                   
int i,j,n;

    printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0){
				printf(" 0 ");
			} else{
				printf(" 1 ");
			}
			
		}
		printf("\n");
	}
}
