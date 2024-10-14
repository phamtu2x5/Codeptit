#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    int f[1005];
    f[0]=0,f[1]=1;
    int mod=1e9+7;
    for(int i=2;i<=1002;i++)
    {
        f[i]=(f[i-1]+f[i-2])%mod;
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<f[n]<<"\n";
    }
return 0;
}