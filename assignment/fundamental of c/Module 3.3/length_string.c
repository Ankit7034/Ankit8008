#include<stdio.h>
int main()
{
	char str[40];
	printf("Enter a string :");
	gets(str);
	int i=0,l=0;
	while(str[i]!='\0')
	{
		l++;
		i++;
	}
	printf("the length of string is :%d",l);
	
}
