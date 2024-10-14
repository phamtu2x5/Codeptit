#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t;
string s;
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>s;
        int res=0,n=s.size()-1;
        for(int i=0;i<=n;i++)
            for(int j=i;j<=n;j++)
                res+=(s[i]==s[j])?1:0;
        cout<<res<<"\n";
    }
return 0;
}       