#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int to_max(int x){
    int res=0;
    int k=1;
    while(x>0){
        int t=x%10;
        if(t==5)
            t=6;
        res=t*k+res;
        k*=10;
        x/=10;
    }
    return res;
}
int to_min(int x){
    int res=0;
    int k=1;
    while(x>0){
        int t=x%10;
        if(t==6)
            t=5;
        res=t*k+res;
        k*=10;
        x/=10;
    }
    return res;
}
int t,n;
signed main() {
    fastio
    cin>>t;
    while(t--){
        int x1,x2;
        cin>>x1>>x2;
        cout<<to_min(x1)+to_min(x2)<<" "<<to_max(x1)+to_max(x2)<<"\n";
    }
return 0;
}