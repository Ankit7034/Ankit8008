#include<stdio.h>
int main()
{
	// number Acending order
	
	int a[5],i,j,temp;
	for(i=0; i<5;i++)
	{
		printf("Enter the number :");
		scanf("%d",&a[i]);//2,4,3,1,7
	}
	
		for(i=0; i<5;i++)
		{
			for(j=i+1; j<5; j++)
			{
			if(a[i]>a[j]){
			    temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			  }	
          	}
		}
		printf("\nsorted in ascending order \n");
		for(i=0; i<5; i++)
		{
			printf("%d",a[i]);
		    
		}
		printf("\n");
}
