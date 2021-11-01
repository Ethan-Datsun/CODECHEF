#include <stdio.h>

int main() 
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int x;
	    scanf("%d",&x);
	    
	    if(x%10==0)
	        printf("%d\n",0);
	   else if(x%10==5)
	        printf("%d\n",1);
	   else
	    printf("%d\n",-1);
	}
	return 0;
}

