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
        int res=0,sum=0;
        cin>>n;
        vector<vector<int>>a(n+2,vector<int>(n+2));
        for(int i=1;i<=n;i++){
            int s=0;
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                sum+=a[i][j];
                s+=a[i][j];
            }
            res=max(res,s);
        }
        for(int i=1;i<=n;i++){
            int s=0;
            for(int j=1;j<=n;j++)
                s+=a[j][i];
            res=max(res,s);
        }
        cout<<res*n-sum<<"\n";
    }
return 0;
}