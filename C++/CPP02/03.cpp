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
        cin>>n;
        vector<int>a(n+5);
        vector<int>f(N,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            a[i]=max(0ll,a[i]);
            f[a[i]]=1;
        }
        for(int i=1;i<N;i++)
            if(!f[i])
                {
                    cout<<i<<"\n";
                    break;
                }
    }
    return 0;
}