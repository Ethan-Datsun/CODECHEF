#include <stdio.h>

int main() {
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float b;
        scanf("%f",&b);
        float gross=0,hra,da;
        if(b<1500)
        {
            hra=(b*10)/100;
            da=(b*90)/100;
            gross=b+hra+da;
        }
        else if(b>1500)
        {
            hra=500;
            da=(b*98)/100;
            gross=b+hra+da;
        }
        
        printf("%.2f\n",gross);
        
    }
	return 0;
}

