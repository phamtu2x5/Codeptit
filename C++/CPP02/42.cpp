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
        int res=0;
        cin>>n;
        vector<int>a(n+5);
        vector<int>b(n+5);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            a[i]+=a[i-1];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
            b[i]+=b[i-1];
        }
        for(int i=1;i<=n;i++)
            for(int j=i;j<=n;j++)
            if(a[j]-a[i-1]==b[j]-b[i-1])
                res=max(res,j-i+1);
        cout<<res<<"\n";
    }
return 0;
}