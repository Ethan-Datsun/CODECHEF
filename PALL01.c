#include <stdio.h>

int main() 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int x,temp,rem,rev=0;
        scanf("%d",&x);
        temp=x;
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev==temp)
            printf("wins\n");
        else
            printf("loses\n");
    }
	
	return 0;
}

