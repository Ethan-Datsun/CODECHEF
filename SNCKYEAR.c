#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--){
 int y;
 scanf("%d",&y);
 if(y == 2019 || y == 2010 || y == 2015 || y == 2016 || y == 2017){
 	printf("HOSTED\n");
 }
 else
 	printf("NOT HOSTED\n");
}
	
	return 0;
}