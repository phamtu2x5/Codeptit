#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,k,b;
signed main() {
    fastio
    cin>>n>>k>>b;
    int res=0;
    vector<int>a(n+1,0);
    for(int i=1;i<=b;i++)
    {
        int x;
        cin>>x;
        a[x]=1;
    }
    for(int i=1;i<=k;i++)
        if(a[i])
            res++;
    int ans=res;
    for(int i=k+1;i<=n;i++)
    {
        if(a[i-k]) res--;
        if(a[i])   res++;
        ans=min(ans,res);
    }
    cout<<ans;
    return 0;
}