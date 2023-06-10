#include<stdio.h>
#include<string.h>
   // check the number palindrome or not.
int main()
{
	char str[40],str1[40];
	int len;
	printf("Enter a string :");
	gets(str);
	len=strlen(str);
	strcpy(str1,str);
	strrev(str);
	if(strcmp(str,str1)==0)
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
	
}
