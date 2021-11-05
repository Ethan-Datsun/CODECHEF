#include <stdio.h>
int main(void) 
{
    double A,B;
    scanf("%lf %lf\n",&A,&B);
    char c;
    scanf("%c",&c);
    switch(c)
    {
        case '+':
           printf("%lf\n",A+B);
           break;
        case '-':
           printf("%lf\n",A-B);
           break;
        case '*':
           printf("%lf\n",A*B);
           break;
        default:
           printf("%lf\n",A/B);
    }
    return 0;
}    