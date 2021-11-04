#include<stdio.h>

int main()
{
    int testcase;
    scanf("%d",&testcase);
    if(testcase>=1&&testcase<=10)
    {
        while(testcase--)
        {
            long long int n,i,min=0;
            scanf("%lld",&n);
            long long int a[n];
            for(i=0;i<n;i++)
                scanf("%lld",&a[i]);
            min=a[0];
            for(i=1;i<n;i++)
                if(a[i]<min)
                    min=a[i];
            min=min*(n-1);
            printf("%lld\n",min);
        }
    }
	return 0;
}
