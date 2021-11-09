#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,d,l;
        cin>>c>>d>>l;
        if(l%4!=0)
        {
            cout<<"no\n";
            continue;
        }
        int catcount=l/4-d;
        if(catcount<0)
        {
            cout<<"no\n";
            continue;
        }
        int catback = c - catcount;
        if(catback<0 || catback>2*d)
        {
            cout<<"no\n";
            continue;
        }
        cout<<"yes\n";
    }
	
	return 0;
}
