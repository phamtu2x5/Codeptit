#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    freopen("VANBAN.in","r",stdin);
    string s;
    set<string>st;
    while(cin>>s){
        for(auto&x:s)
            x=tolower(x);
        st.insert(s);
    }
    for(auto x:st)
        cout<<x<<"\n";
    return 0;
}