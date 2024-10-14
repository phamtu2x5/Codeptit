#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t,a,b;
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
        cin>>a>>b;
        cout<<lcm(a,b)<<" "<<gcd(a,b)<<"\n";
    }
    return 0;
}