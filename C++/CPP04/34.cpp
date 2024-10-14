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
        vector<int>a(n+2),b(n+2);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        a[0]=a[1],a[n+1]=a[n];
        for(int i=1;i<=n;i++)
        {
            b[i]=a[i-1]*a[i+1];
            cout<<b[i]<<" ";
        }
        cout<<'\n';
    }
return 0;
}