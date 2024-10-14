#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int t,n;
int pow2(int a,int b,int c){
    if(b==0) return 1;
    int s=pow2(a,b/2,c);
    s=(s*s)%c;
    if(b%2==1)
        s=(s*a)%c;
    return s;
}
signed main() {
    fastio
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<pow2(a,b,c)<<"\n";
    }
return 0;
}