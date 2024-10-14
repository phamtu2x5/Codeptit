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
        int maxx=0;
        cin>>n;
        vector<int>a(N);
        for(int i=1;i<=n;i++)
            {
                cin>>a[i];
                maxx=max(maxx,a[i]);
            }
        cout<<maxx<<"\n";
    }
    return 0;
}