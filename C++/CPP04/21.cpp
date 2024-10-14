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
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(auto &x:a)
            {
                cin>>x;
                mp[x]=1;
            }
        for(int i=0;i<n;i++)
            if(mp[i])
                cout<<i<<" ";
            else cout<<"-1 ";
        cout<<"\n"; 
    }
return 0;
}