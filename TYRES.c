#include <stdio.h>

int main() {
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int x;
        scanf("%d",&x);
        if(x%4==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
	return 0;
}