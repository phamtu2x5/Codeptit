#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,k;
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n>>k;
        int d=0;
        vector<int>a(n);
        for(auto &x:a){
            cin>>x;
            d+=x<=k;
        }
        int res=0;
        for(int i=0;i<d;i++)
            res+=a[i]<=k;
        int cnt=res;
        for(int i=d;i<n;i++)
        {
            if(a[i-d]<=k)   cnt--;
            if(a[i]<=k)     cnt++;
            res=max(res,cnt);
        }
        cout<<d-res<<"\n";
    }
return 0;
}   