#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    int ok=1;
    string s;
    while(cin>>s){
        for(auto &x:s){
            if(isalpha(x))
                x=tolower(x);
        }
        if(ok)
        {
            if(isalpha(s[0]))
                s[0]=toupper(s[0]);
            ok=0;
        }
        char x=*s.rbegin();
        if(x=='.' || x=='?' || x=='!'){
            cout<<s.substr(0,s.size()-1)<<"\n";
            ok=1;
        }
        else cout<<s<<" ";
    }
    return 0;
}