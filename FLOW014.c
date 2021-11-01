#include <stdio.h>

int main() {
	int testcase;
	float h,c,t;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    scanf("%f%f%f",&h,&c,&t);
	   if(h>50 && c<0.7 && t>5600)
	        printf("%d\n",10);
	    else if(h>50 && c<0.7)
	        printf("%d\n",9);
	    else if(c<0.7 && t>5600)
	        printf("%d\n",8);
	    else if(h>50 && t>5600)
	        printf("%d\n",7);
	    else if(h>50 || c<0.7 || t>5600)
	        printf("%d\n",6);
	    else
	        printf("%d\n",5);
	}
	return 0;
}

