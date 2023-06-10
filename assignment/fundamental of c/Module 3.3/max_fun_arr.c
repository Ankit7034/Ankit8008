#include<stdio.h>
   // find max number in arry using funtion.
int num(int n[])
{
 int max;
 int i;
 for(i=0; i<5; i++)
 {
 	if(max<n[i]){
 	max=n[i];
	 }
 }
   return max;
}

int main()
{
	int a[5],i; 
	for(i=0; i<5; i++)
	{
		printf("Enter the element :");
		scanf("%d",&a[i]);
	}
	
	printf("max num is : %d",num(a));
}
