#include<conio.h>
#include<stdio.h>

int main()
{
  int i,r,c,sp=4,st=1;
  for(i=1;i<=5;i++)
  {
  		for(r=1;r<=sp;r++)
  		{
  		printf("  ") ;
  	    }
		for(c=1;c<=st;c++)
		{
			printf(" * ");
		}	
		printf("\n");
		sp--;
		st+=2;		
    }
    sp=1;
    st=(st-2)-2;
    for(i=1;i<=4;i++)
    {
        
        for(r=1;r<=sp;r++)
  		{
  		printf("  ") ;
  	    }
		for(c=1;c<=st;c++)
		{
			printf(" * ");
		}			
		printf("\n");
		sp++;;
		st-=2;
	}
  }

