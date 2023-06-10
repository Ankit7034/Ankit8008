#include<stdio.h>
int main()
{
	int ch;
	

	printf("\t1.ascending\n");
	printf("\t2.decending\n");
	
	printf("Enter the choice :");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("----acending order---");
	int a[5],i,j;
	for(i=0; i<5; i++ )
	{
		printf("enter thr element :");
		scanf("%d",&a[i]);
	}
	int temp;
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
	printf("\nsorted in ascending order :\n");
	for(i=0; i<5; i++)
	{
		printf("%d",a[i]);
	}
	 
	}
	
	
  if(ch==2)
	{
		printf("---decending order---\n");
	int b[5],k,m;
	for(k=0; k<5; k++ )
	{
		printf("enter thr element :");
		scanf("%d",&b[k]);
	}
	int t;
	for(k=0; k<5; k++)
	{
		for(m=k+1; m<5; m++)
		{
			if(b[k]<b[m])
			{
			t=b[k];
			b[k]=b[m];
			b[m]=t;
			}
		}
	}
	int z;
	printf("\nsorted in desending order :\n");
	for(k=0; k<5; k++)
	{
		printf("%d",b[k]);
	}
	}
	
	
  
}
