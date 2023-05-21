#include<stdio.h>
main()
{
   /*  A
       B C
       D E F
       G H I J
       K L M N O   */
       
       
    int i,j,n;
    char ch = 'A';
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
