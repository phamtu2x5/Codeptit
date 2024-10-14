#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,m;
signed main() {
    fastio
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    cin>>m;
    vector<vector<int>>b(m,vector<int>(m));
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            cin>>b[i][j];
    for(int i=0;i<=n-m;i+=m){
        for(int j=0;j<=n-m;j+=m){
            for(int z=0;z<m;z++)
                for(int t=0;t<m;t++)
                    a[i+z][j+t]*=b[z][t];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}