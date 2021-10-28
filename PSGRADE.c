#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,amin,bmin,cmin,tmin;
        scanf("%d %d %d %d %d %d %d",&amin,&bmin,&cmin,&tmin,&a,&b,&c);
        if((a<amin)||(b<bmin)||(c<cmin)||(a+b+c<tmin))
        
                printf("NO\n");
            else
                printf("YES\n");
        
    }

	return 0;
}

