#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int res = 0;
        int mult = 1;
        while(a || b){
            int sum = (a%10+b%10)%10;
            res = sum*mult+res;
            mult *= 10;
            a = a/10;
            b = b/10;
        }
        cout<<res<<endl;
    }
	return 0;
}