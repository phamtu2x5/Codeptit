#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    string s;
    cin>>s;
    for(auto &x:s){
        x=tolower(x);
    }
    for(auto x:s)
        if(x!='u' && x!='e' && x!='o' && x!='a' && x!='i' && x!='y')
            cout<<"."<<x;
    return 0;
}