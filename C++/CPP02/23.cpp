#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int test,n,m;
signed main() {
    fastio
    cin>>test;
    while(test--){
        cin>>n>>m;
        vector<vector<int>>a(n+2,vector<int>(m+2,0));
        vector<int>ans;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>a[i][j];
        int hbd=1,hkt=n,cbd=1,ckt=m;
        int t=0;
        while(t<m*n){
            for(int i=cbd;i<=ckt && t<m*n ;i++){
                ans.push_back(a[hbd][i]);
                t++;
            }
            for(int i=hbd+1;i<=hkt && t<m*n ;i++){
                ans.push_back(a[i][ckt]);
                t++;
            }
            for(int i=ckt-1;i>=cbd && t<m*n ;i--){
                ans.push_back(a[hkt][i]);
                t++;
            }
            for(int i=hkt-1;i>=hbd+1 && t<m*n ;i--){
                ans.push_back(a[i][cbd]);
                t++;
            }
            cbd++,hbd++,ckt--,hkt--;
        }
        for(auto x:ans)
            cout<<x<<" ";
        cout<<"\n";
    }
return 0;
}