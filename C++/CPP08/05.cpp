#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    ifstream in1("DATA1.in");
    ifstream in2("DATA2.in");
    map<string,int>mp1,mp2,mp3;
    string s;
    while(in1>>s){
        for(auto&x:s)
            x=tolower(x);
        mp1[s]=1;
        mp3[s]=1;
    }
    while(in2>>s){
        for(auto&x:s)
            x=tolower(x);
        mp2[s]=1;
        mp3[s]=1;
    }
    for(auto x:mp3)
        cout<<x.first<<" ";
    cout<<'\n';
    for(auto x:mp1){
        if(mp2[x.first])
            cout<<x.first<<' ';
    }
    return 0;
}