#include<stdio.h>

#include<math.h>

int main()
{
   int t;
   scanf("%d",&t);
   int n;
  while(t--)
   {
        scanf("%d",&n);
        n=n-2;
        n=floor(n/2);
        printf("%d\n",(n*(n+1))/2);
   }
 return 0;
}
