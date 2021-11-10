#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,ans=0;
        cin>>x>>y;
        if(x>y)
            ans=x-y;
            cout<<ans<<endl;
    }


	return 0;
}
