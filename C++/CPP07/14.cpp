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
        for(auto &x:a)
            cin>>x;
        prev_permutation(a.begin(),a.end());
        for(auto &x:a)  
            cout<<x<<" ";
        cout<<"\n";
    }
return 0;
}