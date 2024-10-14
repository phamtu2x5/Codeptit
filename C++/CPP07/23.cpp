#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
string value(char x){
    int X=x-'0';
    switch (X)
    {
    case 2 : case 3 : case 5 : case 7 : return to_string(X);
        break;
    case 4: return "322";
        break;
    case 6: return "53";
        break;
    case 8: return "2227";
        break;
    case 9: return "2337";
        break;
    default:   return "";
        break;
    }
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        string s;
        string res="";
        cin>>n>>s;
        for(auto x:s){
            res+=value(x);
        }
        sort(res.begin(),res.end(),greater<char>());
        cout<<res<<"\n";
    }
return 0;
}