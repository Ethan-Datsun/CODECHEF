#include <stdio.h>
#include <string.h>

int main() 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {   
        int brass=0,amber=0;
        
        char q[50];
        scanf("%s",&q);
        
        for(int i=0;i<strlen(q);i++)
        {
            if(q[i]=='a')
                amber++;
            else
                brass++;
        }
        if(amber<brass)
            printf("%d\n",amber);
        else
            printf("%d\n",brass);
        
    }
	return 0;
}

