#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    ifstream inp("DATA.in");
    int m,n;
    inp>>m>>n;
    map<int,int>mp1,mp2;
    for(int i=1;i<=m;i++)
    {
        int x;
        inp>>x;
        mp1[x]=1;
    }
    for(int i=1;i<=n;i++){
        int x;
        inp>>x;
        if(mp1[x])
            mp2[x]=1;
    }
    for(auto x:mp2)
        cout<<x.first<<" ";
    return 0;
}