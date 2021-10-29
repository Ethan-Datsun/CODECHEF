#include <stdio.h>

int main()
{   
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else if(a==b)
            printf("=\n");
    }
    
	return 0;
}

