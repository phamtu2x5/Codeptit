#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int kt(int x){
    if(x<2) return 0;
    if(x<=3) return 1;
    if(x%2==0 || x%3==0)    return 0;
    for(int i=5;i*i<=x;i+=6)
        if(x%i==0 || x%(i+2)==0)
            return 0;
    return 1;
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        int res=0;
        int l,r;
        cin>>l>>r;
        int a=sqrt(l),b=sqrt(r);
        a*a<l?a++:a+=0;
        for(int i=a;i<=b;i++)
            if(kt(i))
                res++;
        cout<<res<<'\n';
    }
return 0;
}