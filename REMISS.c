#include <stdio.h>

int max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}

int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int Min=max(a,b);
        int Max=a+b;
        printf("%d\t%d\n",Min,Max);
    }
	return 0;
}

