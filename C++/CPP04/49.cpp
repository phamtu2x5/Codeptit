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
        int x,ok=1;
        cin>>n>>x;
        vector<int>a(n);
        for(auto &x:a)
            cin>>x;
        sort(a.begin(),a.end());
        for(int i=0;i<n-1 &&ok;i++)
        {
            if(lower_bound(a.begin(),a.end(),a[i]+x)!=a.end())
            {
                int res=lower_bound(a.begin(),a.end(),a[i]+x)-a.begin();
                if(a[res]==a[i]+x && res!=i){
                    cout<<"1\n";
                    ok=0;
                }
            }
        }
        if(ok)
        cout<<"-1\n";
    }
return 0;
}