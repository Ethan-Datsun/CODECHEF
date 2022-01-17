#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int testcase,a,b,n;
	cin>>testcase;
	while(testcase--)
	{
	    cin>>a>>b>>n;
	    if(n%2)
	        a=a*2;
	       cout<<max(a,b)/(min(a,b))<<"\n";
	       
	}
	return 0;
}
