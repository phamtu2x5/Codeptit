#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;

int t,n,m;
signed main() {
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<int>>a(n+5,vector<int>(m+5));
        vector<int>h(n+5);
        vector<int>c(m+5);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                {
                    cin>>a[i][j];
                    if(a[i][j])
                        h[i]=c[j]=1;
                        
                }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
                {
                    a[i][j]=(h[i]||c[j])?1:0;
                    cout<<a[i][j]<<" ";
                }
            cout<<"\n";
        }   
    }
    return 0;
}