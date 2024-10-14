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

int Euler(int x){
    int res=x;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        {
            res=res-res/i;
            while(x%i==0)
                x/=i;
        }
    if(x>1)
        res=res-res/x;
    return res; 
}

signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n;
        if(kt(Euler(n)))
            cout<<"1\n";
        else cout<<"0\n";
    }
return 0;
}