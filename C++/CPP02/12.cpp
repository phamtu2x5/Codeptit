#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
using namespace std;
int pow2(int n, int k){
    if(!k) return 1;
    int res = pow2(n, k/2);
    (res *= res) %= mod;
    if(k&1) (res *= n) %= mod;
    return res;
}
int t,n,x;
signed main() {
    fastio
    cin>>t;
    while(t--){
        int res=0;
        cin>>n>>x;
        int m=n;
        vector<int>a(n+5);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            res+=(a[i]*(pow2(x,n-i)%mod))%mod;
            res%=mod;
        }
        cout<<res<<"\n";
    }   
return 0;
}