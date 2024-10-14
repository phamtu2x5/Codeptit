#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        int ans=-1e9,res=-1e9;
        for(int &x:a)
            cin>>x;
        for(int &x:a){
            res=max(x,res+x);
            ans=max(ans,res);
        }
        cout<<ans<<"\n";
    }
return 0;
}