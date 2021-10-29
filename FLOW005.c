#include <stdio.h>

int main() {
	
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int x,count=0;
	    scanf("%ld",&x);
	    while(x!=0)
	    {
	        if(x>=100)
	        {
	            count=count+x/100;
	             x=x%100;
	        }
	        if(x>=50)
	        {
	            count=count+x/50;
	            x=x%50;
	        }
	        if(x>=10)
	        {
	            count=count+x/10;
	            x=x%10;
	        }
	        if(x>=5)
	        {
	            count=count+x/5;
	            x=x%5;
	        }
	        if(x>=2){
	            count=count+x/2;
	            x=x%2;
	        }
	        if(x>=1)
	        {
	            count=count+x/1;
	            x=x%1;
	        }
	    }
	        printf("%ld\n",count);
	}
	return 0;
}
