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
        vector<int>a(n);
        for(auto &x:a)
            cin>>x;
        sort(a.begin(),a.end());
        int res=0;
        for(int i=0;i<n-1;i++)
        {
            int tmp=lower_bound(a.begin()+i,a.end(),a[i]+k)-a.begin();
            res+=tmp-1-i;
        }
        cout<<res<<"\n";
    }
return 0;
}