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
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        unordered_map<int,int>mp;
        for(auto x:s){
            if(isdigit(x))
                mp[x-'0']++;
        }
        for(int i=0;i<=9;i++)
            if(mp[i])
                cout<<i<<" ";
        cout<<"\n";
    }
return 0;
}