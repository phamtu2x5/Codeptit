#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    freopen("DATA.in","r",stdin);
    map<int,int>mp;
    int x;
    while(cin>>x)
        mp[x]++;
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}