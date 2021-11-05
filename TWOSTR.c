#include <stdio.h>
#include<string.h>

int main() 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        char a[11],b[11];
        int count =0,x;
        scanf("%s",a);scanf("%s",b);
        x=strlen(a);
        for(int i=0;i<x;i++)
        {
            if(a[i]==b[i]||a[i]=='?'||b[i]=='?')
                {count++;}
        }
        if(x==count)
            printf("Yes\n");
        else
            printf("No\n");
    }
	
	return 0;
}

