#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	for(i=0; i<5; i++)
	{
		printf("Enter the element :");
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nsorted in ascending order is :\n");
	for(i=0; i<5; i++)
	{
		printf("%d ",a[i]);
	}
}
