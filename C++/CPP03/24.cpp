#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int pow2(int x,int b,int c){
    if(!b)  return 1;
    int s=pow2(x,b/2,c);
    s=s*s%c;
    if(b&1){
        s=s*x%c;
    }
    return s;
}
int mod(string a,int b,int c){
    int reminder=0;
    for(auto x:a){
        int num=x-'0';
        reminder=(reminder*10+num)%c;
    }
    return pow2(reminder,b,c);
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        string a;
        int b,m;
        cin>>a>>b>>m;
        cout<<mod(a,b,m)<<"\n";
    }
return 0;
}