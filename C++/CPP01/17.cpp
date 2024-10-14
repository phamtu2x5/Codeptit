#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t,n;
signed main() {
    cin>>t;
    while(t--){
        cin>>n;
        if(n%9==0)
            cout<<9<<"\n";
        else cout<<n%9<<"\n";
    }
    return 0;
}