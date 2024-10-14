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
        string s;
        cin>>s;
        int res=0;
        for(int i=0;i<s.size()-2;i++){
            while(s.substr(i,3)=="100"){
                s.erase(i,3);
                res+=3;
                i--;
            }
        }
        if(res) cout<<res;
        cout<<'\n';
    }
return 0;
}