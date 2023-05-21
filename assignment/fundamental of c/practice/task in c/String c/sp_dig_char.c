#include<stdio.h>
main()
{
	char str[40];
	printf("Enter the name :");
	gets(str);
	int i=0,b=0,d=0,c=0;
	while(str[i]!='\0')
	{
		if(str[i] == ' ')
		{
			b++;
		} 
		else if(str[i]>='0' && str[i]<='9')
		{
			d++;
		}
		
		 else 
		  {
		  	
		  	c++;
		  }
		  i++;
	}
	printf("space is:%d\n",b);
	printf("digit is:%d\n",d);
	printf("char is:%d\n",c);
}
