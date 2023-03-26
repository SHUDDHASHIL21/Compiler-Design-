#include<stdio.h>
void main()
{
	char com[30];
	int i=2,a=0;
	printf("\n Enter to check whether a line is comment line or not:\n");
	gets(com);
	if(com[0]=='/')
	{
		if(com[1]=='/')
		printf("%s :: The given line is a comment line",com);
		else if(com[1]=='*')
		{
			for(i-2;i<30;i++)
			{
			
				if(com[i] == '*' && com[i+1] == '/')
				{
					printf("%s :: The given line is a comment line",com);
					a=1;
					break;
				}
				else
				continue;
	    }
			
          if(a==0) 
		  printf("It is not a comment line");
		  	
		}
		else
		printf("It is not a comment line");
	
    }
    else
   
    printf("It is not a comment line");
    
}
    
    
    
