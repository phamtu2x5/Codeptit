#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,k;
int p=1e9+7;
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<vector<int>>a(n+5,vector<int>(n+5,0));
        for(int i=1;i<=n;i++)
            a[i][0]=1;
        a[1][1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++)
                a[i][j]=(a[i-1][j-1]+a[i-1][j])%p;
        }
        cout<<a[n][k]<<"\n";
    }
return 0;
}