#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t,x,y,z,n;
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}
signed main() {
    cin>>t;
    while(t--){
        cin>>x>>y>>z>>n;
        int st=pow(10,n-1),en=pow(10,n);
        int res=lcm(x,lcm(y,z));
        if(res>=en)
            cout<<"-1\n";
        else{
            int k=st/res;
            if(st%res!=0)
                k++;
            cout<<k*res<<"\n";
        }
    }
    return 0;
}