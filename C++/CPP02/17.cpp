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
        int k;
        cin>>n>>k;
        vector<int>a(n*n);
        for(auto&x:a)
            cin>>x;
        sort(a.begin(),a.end());
        cout<<a[k-1]<<"\n";
    }
return 0;
}