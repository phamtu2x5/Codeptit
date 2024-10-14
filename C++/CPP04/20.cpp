#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,x,y;
int cmp(tuple<int,int,int>p,tuple<int,int,int>q){
    return get<1>(p)<get<1>(q) || (get<1>(p)==get<1>(q) && get<2>(p)<get<2>(q));
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<tuple<int,int,int>>a;
        for(int i=1;i<=n;i++){
            cin>>y;
            a.push_back({y,abs(x-y),i}); 
        }
        sort(a.begin(),a.end(),cmp);
        for(auto x:a)
            cout<<get<0>(x)<<" ";
        cout<<"\n";
    }
return 0;
}