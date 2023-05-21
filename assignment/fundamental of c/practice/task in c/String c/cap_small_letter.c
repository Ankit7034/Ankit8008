#include<stdio.h>
main()
{
	char str[40];
	printf("Enter the name :");
	gets(str);
	int i=0,b=0,d=0,c=0;
	while(str[i]!='\0')
	{
		if(str[i] >= 'A' && str[i]<='Z')
		{
			b++;
		} 
		 else if (str[i] >= 'a' && str[i]<='z')
		  {
		  	
		  	c++;
		  }
		  i++;
	}
	printf("Capital letter is: %d\n",b);
	printf("Small letter is: %d\n",c);
}
