#include <stdio.h>

int main(void) {
    int area,peri,l,b;
    scanf("%d %d",&l,&b);
    area=(l*b);
    peri=2*(l+b);
    if(area<peri){
        printf("Peri\n");
        printf("%d",peri);
    }
    else if(area>peri){
        printf("Area\n");
        printf("%d",area);
    }
    else{
        printf("Eq\n");
        printf("%d",area);
    }
    return 0;
}