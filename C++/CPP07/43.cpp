#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        vector<string>ans;
        stringstream ss(s);
        string str;
        while(ss>>str){
            ans.insert(ans.begin(),str);
        }
        for(auto x:ans)
            cout<<x<<" ";
        cout<<"\n";
    }   
return 0;
}