#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,rem=0;
	    scanf("%d",&n);
	    rem=n%10;
	    while(n>=10)
	    {
	        n=n/10;
	    }
	    rem+=n%10;
	    printf("%d\n",rem);
	    
	}
	return 0;
}

