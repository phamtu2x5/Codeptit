#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t,n,m;
vector<int> solve(vector<int>&a,vector<int>&b){
    unordered_map<int,int>mp;
    for(auto x:a)
        mp[x]++;
    vector<int>result;
    for(auto x:b){
        if(mp.find(x)!=mp.end()){
            result.insert(result.end(),mp[x],x);
            mp.erase(x);
        }
    }
    vector<int>remain;
    for(auto pair:mp){
        remain.insert(remain.end(),pair.second,pair.first);
    }
    sort(remain.begin(),remain.end());
    result.insert(result.end(),remain.begin(),remain.end());
    return result;
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        vector<int>ans=solve(a,b);
        for(auto x:ans)
            cout<<x<<" ";
        cout<<"\n";
    }
return 0;
}