#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int n,k,ans=0;
	    cin>>n>>k;
	    for(int i=2;i<=k;i++)
	    {
	        if(ans<n%i)
	        {
	            ans=n%i;
	            
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
