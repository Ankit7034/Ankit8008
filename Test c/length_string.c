#include<stdio.h>
int main()
{
	char str[40];
	printf("Enter a string :");
	gets(str);
	int i,l=0;
	for(i=0; str[i]!='\0'; i++)
	{
		l++;
	}
	printf("The length of string is :%d",l);
}
