#include <stdio.h>
#include <ctype.h>

int main() 
{
    int x;
    scanf("%d",&x);
    if(x>=0 && x<=9)
        printf("1\n");
    else if(x>=10 && x<=99)
        printf("2\n");
     else if(x>=100 && x<=999)
        printf("3\n");
    else
        printf("More than 3 digits\n");
	return 0;
}

