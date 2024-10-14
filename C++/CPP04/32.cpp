#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int cmp(string p,string q){
    return p+q>q+p;
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n;
        vector<string>a(n);
        for(auto &x:a)
            cin>>x;
        sort(a.begin(),a.end(),cmp);
        for(auto x:a)
            cout<<x;
        cout<<'\n';
    }
return 0;
}