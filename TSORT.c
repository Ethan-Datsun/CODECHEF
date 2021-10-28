#include <stdio.h>
int ar[10000000];
int main() {
    int a,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        ar[a]++;
    }
    a=0;
    while(a<10000000)
    {
        while(ar[a])
        {
            printf("%d\n",a);
            ar[a]--;
        }
        a++;
    }
    return 0;
    
}
