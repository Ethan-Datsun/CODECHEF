#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int count=0;
	    for(int i=2;i<=n;i++){
	        if(n%i==0){
	            count++;
	          }
	    }
	    if(count==1){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}
	return 0;
}
