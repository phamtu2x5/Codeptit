#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t;
int mod(string a,int b){
    int reminder=0;
    for(auto x:a){
        int num=x-'0';
        reminder=(reminder*10+num)%b;
    }
    return  reminder;
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        string a;
        int b;
        cin>>a>>b;
        int result=mod(a,b);
        cout<<result<<"\n";
    }
return 0;
}