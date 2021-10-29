#include <stdio.h>

int main() 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int i,d,n;
        scanf("%d %d",&d,&n);
        int x=n;
        for(i=1;i<=d;i++)
            x=(x*(x+1))/2;
        
        printf("%d\n",x);
    }
	return 0;
}

