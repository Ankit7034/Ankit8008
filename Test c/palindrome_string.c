#include<stdio.h>
#include<string.h>
int main()
{
	char str[40],a;
	printf("Enter a string :");
	scanf("%s",str);
	int len,i;
	len=strlen(str);
	for(i=1; i<len; i++)
	{
		if(str[i]!=str[len-i-1])
		{
			a++;
			break;
		}
	}
	if(a==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
