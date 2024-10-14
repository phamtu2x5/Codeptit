#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;
int kt(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r])
            return 0;
        l++;r--;
    }
    return 1;
}
int cmp(pair<string,int>x,pair<string,int>y){
    if(x.first.size()>y.first.size() || (x.first.size()==y.first.size() && x.first>y.first))
        return 1;
    return 0;
}
signed main() {
    fastio
    unordered_map<string,int>mp;
    while(cin>>s){
        if(s.size()>1 && kt(s))
            mp[s]++;
    }
    vector<pair<string,int>>a;
    for(auto x:mp){
        a.push_back({x.first,x.second});
    }
    sort(a.begin(),a.end(),cmp);
    for(auto x:a){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    return 0;
}