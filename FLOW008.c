#include <stdio.h>

int main() 
{
  int n,a;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a);
        if(a<10)
            printf("Thanks for helping Chef!\n");
        else
            printf("%d\n",-1);
  }

return 0;
}

