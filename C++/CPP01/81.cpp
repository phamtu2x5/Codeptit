#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,a,x,y;
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>a>>x>>y;
        int k=__gcd(x,y);
        for(int i=1;i<=k;i++)
            cout<<a;
        cout<<"\n";
    }
return 0;
}