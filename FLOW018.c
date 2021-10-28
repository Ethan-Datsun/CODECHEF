#include <stdio.h>

int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}

int main() 
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        
         printf("%d\n",fact(n));
    }
   

	return 0;
}

