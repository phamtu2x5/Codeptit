#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t,n,a[N];
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        int ans=1e9;
        for(int i=1;i<n;i++)
            ans=min(ans,a[i+1]-a[i]);
        cout<<ans<<"\n";
    }
    return 0;
}