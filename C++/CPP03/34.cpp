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
        int res=0;
        string s;
        cin>>s;
        for(auto&x:s){
            if(!isdigit(x))
                x=' ';
        }
        stringstream ss(s);
        string str;
        while(ss>>str){
            res+=stoll(str);
        }
        cout<<res<<"\n";
    }
return 0;
}