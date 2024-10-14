#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int value(string s){
    int ans=0;
    for(auto x:s){
        if(!isdigit(x) || ans>INT_MAX)
            return 0;
        ans=ans*10+x-'0';
    }
    return ans;
}
signed main() {
    freopen("DATA.in","r",stdin);
    string s;
    int res=0;
    while(cin>>s){
        res+=value(s);
    }
    cout<<res;
    return 0;
}