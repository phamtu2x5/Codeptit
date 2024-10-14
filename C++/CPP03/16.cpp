#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int cnt(int x){
    int res=0;
    while(x>0){
        res+=x%10;
        x/=10;
    }
    return res;
}
int t,n;
signed main() {
    fastio
    cin>>t;
    while(t--){
        string s;
        int sum=0;
        cin>>s;
        for(auto x:s)
            sum+=x-'0';
        while(sum>=10){
            sum=cnt(sum);
        }
        sum==9?cout<<"1\n":cout<<"0\n";
    }
return 0;
}