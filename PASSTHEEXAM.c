#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c;
	
	scanf("%d",&t);
	
	for(int i=0; i<t; i++)
	{
	    scanf("%d%d%d",&a,&b,&c);
	    
	    if(a+b+c>=100)
	    {
	       if(a>=10 && b>=10 && c>=10)
	       printf("Pass\n");
	       else
	       printf("Fail\n");
	    }
	    else
	    printf("Fail\n");
	}
	return 0;
}

