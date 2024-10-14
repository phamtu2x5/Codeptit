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
        vector<int>a(n+5,0);
        for(int i=1;i<=n;i++)
            cin>>a[i],a[i]+=a[i-1];
        int ok=-1;
        for(int i=2;i<n;i++)
            if(a[i-1]==a[n]-a[i]){
                ok=i;
                break;
        }
        cout<<ok<<"\n";
    }
return 0;
}