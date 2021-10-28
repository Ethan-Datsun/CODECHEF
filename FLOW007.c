#include <stdio.h>

int main() 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int rev=0,rem;
        int n;
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        printf("%d\n",rev);
    }
	
	return 0;
}

