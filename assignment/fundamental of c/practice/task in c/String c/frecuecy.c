#include<stdio.h>
main()
{
	char str[40],a;
	printf("Enter the name :");
	gets(str);
	scanf("%c",&a);
	int i=0,b=0,d=0,c=0;
	while(str[i]!='\0')
	{
		if(a==str[i]){
			b++;
		}
		  i++;
	}
	printf("The Frequecy number is:%d\n",b);

}
