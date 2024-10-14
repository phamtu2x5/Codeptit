#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n,t,k;
void solve(int n,int k){
    int res=n/k;
    int s=k*(k-1)/2;
    int mod=n%k;
    int ans=res*s+(mod+1)*mod/2;
    if(k==ans)
        cout<<"1\n";
    else cout<<"0\n";
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n>>k;
        solve(n,k);
    }
    return 0;
}