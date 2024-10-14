#include <bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n;
signed main() {
    fastio
    cin >> t;
    cin.ignore();
    while (t--) {
        map<string,int> mp1, mp2;
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        string s,t;
        stringstream ss(s1);
        while(ss>>s){
            mp1[s]=1;
        }
        stringstream st(s2);
        while(st>>t){
            mp2[t]=1;
        }
        for(auto x:mp1)
           if(!mp2[x.first])
            cout<<x.first<<" ";
        cout<<"\n";
    }
    return 0;
}
