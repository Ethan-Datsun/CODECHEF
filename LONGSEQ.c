#include <stdio.h>

int main() 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        char ch[100000];
        scanf("%s",ch);
        int x=0,y=0;
        for(int i=0;ch[i]!='\0';i++)
        {
         if(ch[i]=='0')
            x++;
        else
            y++;
        }
        if(x==1 || y==1)
            printf("Yes\n");
        else
            printf("No\n");
    }

	return 0;
}

