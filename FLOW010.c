#include <stdio.h>
//0#include <string.h>
int main() 
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
	    char a;
	    scanf("\n%c",&a);
	    if(a=='B'||a=='b'){
	        printf("BattleShip\n");}
	   else if(a=='C'||a=='c'){
	        printf("Cruiser\n");}
	    else if(a=='D'||a=='d'){
	         printf("Destroyer\n");}
	    else if(a=='F'||a=='f'){
	           printf("Frigate\n");}
	}
	return 0;
}
