#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int mod(int a,int b,int c){
    if(!b)  return 0;
    int s=mod(a,b/2,c);
    s=(s*2)%c;
    if(b&1)
        s=(s+a)%c;
    return s;
}
signed main() {
    fastio
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<mod(a,b,c)<<"\n";
    }
return 0;
}