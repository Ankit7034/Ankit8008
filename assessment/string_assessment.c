#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str1[50];
    char choice;
	int len,i,a;
	do{
	printf("\t 1.Reverse a string \n");
	printf("\t 2.Concatenation \n");
	printf("\t 3.Palindrome \n");
	printf("\t 4.Copy a string \n");
	printf("\t 5.Length of the string \n");
	printf("\t 6.Frequency of charecter \n");
	printf("\t 7.vowels and consonants \n");
	printf("\t 8.black spaces and digits \n\n");

    int ch;
    printf("Please Enter your choice :");
    scanf("%d",&ch);
   
        if(ch==1)
        {
    	printf("Enter the string :");
    	fflush(stdin);
        gets(str);
    	strrev(str);
    	printf("The reverse string is : %s",str);
		}
		
		else if(ch==2)
        {
    	printf("Enter the first string :");
    	fflush(stdin);
    	gets(str);
    	printf("Enter the second string :");
    	scanf("%s",str1);
    	
    	printf("The concatenation string is : %s",strcat(str,str1));
		}
		
		else if(ch==3)
        {
    	printf("Enter the string :");
    	fflush(stdin);
    	gets(str);
    	len=strlen(str);
    	strcpy(str1,str);
    	strrev(str1);
    	if(strcmp(str,str1)==0)
    	{
    		printf("The string is palindrome");
		}
		else
		{
    		printf("The string is not palindrome");
		}
    	
		}
		
	   else	if(ch==4)
        {
    	printf("Enter the string :");
    	fflush(stdin);
    	gets(str);
    	strcpy(str1,str);
    	
    	printf("The copy string is : %s",str1);
	}
	
	   else if(ch==5)
        {
    	printf("Enter the string :");
    	fflush(stdin);
    	gets(str);
    	len=strlen(str);
    	printf("The length string is : %d",len);
		}
		
		else if(ch==6)
		{
	char j;
	printf("Enter the string :");
	scanf("%s",str);
	fflush(stdin);
	printf("Enter count string :");
	scanf("%c",&j);
	
	int i,b=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(j==str[i]){
			b++;
		}
		  
	}
	printf("The Frequecy number is:%d\n",b);
		}
		
	  else if(ch==7)
	  {
	printf("Enter the name :");
	fflush(stdin);
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
		  
	   else if(ch==8)
	   {
	   	printf("Enter the name :");
	   	fflush(stdin);
	     gets(str);
	   int i=0,y=0,k=0,g=0;
	    while(str[i]!='\0')
	   {
		if(str[i] == ' ')
		{
			y++;
		} 
		else if(str[i]>='0' && str[i]<='9')
		{
			k++;
		}
		
		  i++;
	     
		 }	  
	        printf("\nspace is:%d\n",y);
	        printf("digit is:%d\n",k);
	        
	
	   }
	   else
	   {
	   	printf("Invalid input!!");
	   }
	   
	   
    printf("\n\nDo you want continue [y/n] :");
    scanf("%s",&choice);
    }
   while(choice == 'y' || choice == 'Y');
   
   if(choice=='n' || choice=='N')
   {
   	printf("Thank you!!!\n");
   }
   else
	   {
	   	printf("Invalid input!!");
	   }
   
}
