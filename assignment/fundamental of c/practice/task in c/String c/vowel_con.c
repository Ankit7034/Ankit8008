#include<stdio.h>
main()
{
	char str[40];
	printf("Enter the name :");
	gets(str);
	int i=0,b=0,d=0,c=0,j=0;
	while(str[i]!='\0')
	{
		if(str[i]=='A'|| str[i]=='E'||str[i]=='I'|| str[i]=='O'||str[i]=='U'|| str[i]=='a'||str[i]=='e'|| str[i]=='i'||str[i]=='0'|| str[i]=='u')
		{
			b++;
		} 
		 else if(str[i] >= 'A' && str[i]<='Z' || str[i] >= 'a' && str[i]<='z')
		  {
		  	c++;
		  }
		  else 
		  {
		  	d++;
		  }
		  
		 
		  i++;
	}
	printf("Vowel is: %d\n",b);
	printf("consonent is: %d\n",c);
	printf("space is: %d\n",d);
	
}
