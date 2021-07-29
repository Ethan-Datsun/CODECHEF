#include<stdio.h>

int main()
{
	int balance;
	float total_amount;
	    scanf("%d%f",&balance, &total_amount);
	    
	    if(balance+0.5>total_amount)
	        printf("%.2f",total_amount);
	   else if(balance%5!=0)
	    printf("%.2f",total_amount);
	  else
	    printf("%.2f", total_amount-balance-0.5);
	   
	  return 0;
}
