#include<stdio.h>
#include<string.h>
// reverse string using recursion


void reverse(char str[],int i )
{
   if(str[i]=='\0'){
   	  return;
   }
   reverse(str,i+1);
   printf("%c",str[i]);
}

int main()
{
	char str[20];
	printf("Enter a string :");
	gets(str);
	printf("STRING REVERSE IS :");
	reverse(str,0);
	return 0;
}



