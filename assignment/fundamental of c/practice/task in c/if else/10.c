#include<stdio.h>
main()
{
	// check candidate eligible or not.
	int p,c,m;
	printf("Enter the physics marks :");
	scanf("%d",&p);
		printf("Enter the chemistry marks :");
	scanf("%d",&c);
		printf("Enter the maths marks :");
	scanf("%d",&m);
	printf("the total marks of : %d\n",p+c+m);
	
	
	
	if(p>60)
		if(c>65)
			if(m>70)
				if(p+c+m>=190)
					printf("the candidate is eligible ");
				
			 else 
			 printf("not eligible");
		else 
		printf("not eligible");
	  else 
	  printf("not eligible");
	 else 
     printf("not eligible");
			
}
