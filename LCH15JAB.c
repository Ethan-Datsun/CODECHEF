#include <stdio.h>
#include <string.h>
int main(void) {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        char str[51];
        scanf("%s",str);
        int len=strlen(str);
        int count=1,max=0;
        for(int k=0;k<len;k++){
        char ch=str[k];
        for(int j=k+1;str[j]!='\0';j++){
        if(ch==str[j]){
          count++;
        }
    }
        if(count>max){
            max=count;
            count=1;
        }else{
        count=1;
        }
    }
        if((max*2)==len)
         printf("YES\n");
         else
         printf("NO\n");
    }


	return 0;
}