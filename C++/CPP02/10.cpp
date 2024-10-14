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
        int ans=-1e9;
        cin>>n;
        vector<int>a(n+5);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
                if(a[i]<a[j])
                    ans=max(ans,a[j]-a[i]);
        if(ans!=-1e9)
            cout<<ans<<'\n';
        else cout<<"-1\n";
    }

return 0;
}