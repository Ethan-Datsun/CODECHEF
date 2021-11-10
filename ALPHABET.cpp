#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string S;
	cin>>S;
	int n,s,count;
	cin>>n;
	s=S.length();
	while(n--){
	    string N;
	    cin>>N;
	    int i,j,l;
	    count=0;
	    l=N.length();
	    for(i=0;i<l;i++){
	        for(j=0;j<s;j++){
	            if(N[i]==S[j])
	                count++;
	        }
	    }
	    if(count==l)
	      cout<<"Yes"<<endl;
	    else
	      cout<<"No"<<endl;
	}
	return 0;
}