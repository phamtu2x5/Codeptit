#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
vector<string> a(26);
void init(){
    a[0] = a[1] = a[2] = "2";
    a[3] = a[4] = a[5] = "3";
    a[6] = a[7] = a[8] = "4";
    a[9] = a[10] = a[11] = "5";
    a[12] = a[13] = a[14] = "6";
    a[15] = a[16] = a[17] = a[18] = "7";
    a[19] = a[20] = a[21] = "8";
    a[22] = a[23] = a[24] = a[25] = "9";
}
void solve(string res){
    string tmp=res;
    reverse(tmp.begin(),tmp.end());
    res==tmp?cout<<"YES\n":cout<<"NO\n";
}
signed main() {
    fastio
    init();
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string res="";
        for(auto x:s){
            res+=a[tolower(x)-'a'];
        }
        solve(res);
    }
return 0;
}