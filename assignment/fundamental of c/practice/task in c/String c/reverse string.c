#include<stdio.h>
//#include<string.h>
int main()
{
	char str[40];
	scanf("%[^\n]s",str);
	int size=0;
	int k=0;
	while(str[k]!='\0')
	{
		size++;
		k++;
	}
    	char temp;
    	int i,j;
    for(i=0, j=size-1; i<=j; i++, j--)
    {
    	temp=str[i];
    	str[i]=str[j];
    	str[j]=temp;
	}
	
    printf("The reverse string is :\n");
    puts(str);
}
