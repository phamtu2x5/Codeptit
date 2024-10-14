#include <bits/stdc++.h>
#define int long long
#define N 100005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<int>>a(n+1,vector<int>(n+1,0));
        unordered_map<int,int>mp;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j]; 
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int j=2;j<=n;j++){
                for(int t=1;t<=n;t++)
                {
                    if(a[j][t]==a[1][i]){
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt==n-1)
                mp[a[1][i]]=1;
        }
        cout<<mp.size()<<"\n";
    }
return 0;
}