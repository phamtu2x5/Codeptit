#include <bits/stdc++.h>
#define int long long
#define N 1005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
vector<vector<int>>a(N,vector<int>(N));
vector<vector<int>>b(N,vector<int>(N));
vector<vector<int>>c(N,vector<int>(N));
int m,n,p;
signed main() {
    fastio
    cin>>n>>m>>p;
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=p;j++)
            cin>>b[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=p;j++)
            for(int t=1;t<=m;t++)
                c[i][j]+=a[i][t]*b[t][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=p;j++)
            cout<<c[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}