#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,m;
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int>a(n),b(m);
        unordered_map<int,int>mp1,mp2;
        for(auto &x:a){
            cin>>x;
            mp1[x]=1;
        }
        for(auto &x:b){
            cin>>x;
            mp2[x]=1;
        }
        int lmin=min(a[0],b[0]);
        int rmax=max(a[n-1],b[m-1]);
        for(int i=lmin;i<=rmax;i++)
            if(mp1[i] || mp2[i])
                cout<<i<<" ";
        cout<<"\n";
        for(int i=lmin;i<=rmax;i++)
            if(mp1[i] && mp2[i])
                cout<<i<<" ";
        cout<<"\n";
    }
return 0;
}