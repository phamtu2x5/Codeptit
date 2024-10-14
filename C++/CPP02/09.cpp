#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;

int t,n;
signed main() {
    cin>>t;
    while(t--){
        int l,r,q;
        cin>>n>>q;
        vector<int>a(n+5,0);
        for(int i=1;i<=n;i++)
            {
                cin>>a[i];
                a[i]+=a[i-1];
            }
        for(int i=1;i<=q;i++)
            {
                cin>>l>>r;
                cout<<a[r]-a[l-1]<<'\n';
            }
    }
    return 0;
}