#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t,res,n;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
signed main() {
    cin>>t;
    while(t--){
        res=1;
        cin>>n;
        for(int i=2;i<=n;i++)
            res=lcm(res,i);
        cout<<res<<"\n";
    }
    return 0;
}