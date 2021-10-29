#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int sum1=0,sum2=0, winner,lead=0,dif=0;
    for(int i=0;i<n;i++)
    {
        int p1,p2;
        scanf("%d %d",&p1,&p2);
        sum1+=p1;
        sum2+=p2;
        if(sum1>sum2)
        {
            dif=sum1-sum2;
            if(dif>lead)
            {
                lead=dif;
                winner=1;
            }
        }
        else
        {
            dif=sum2-sum1;
            if(dif>lead)
            {
                lead=dif;
                winner=2;
            }
        }
    }
    printf("%d\t%d",winner,lead);
	return 0;
}

