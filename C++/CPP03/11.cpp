#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    cin>>t;
    while(t--){
        int ok=1,xh=0;
        string s;
        cin>>s;
        vector<int>a(26,0);
        for(auto x:s)
            a[x-'a']++;
        for(int i=0;i<26;i++)
            xh=max(xh,a[i]);
        if(s.size()%2==0 && xh*2>s.size())
            ok=0;
        if(s.size()%2==1){
            if(xh*2>=s.size()+3)
                ok=0;
        }
        cout<<ok<<"\n";
    }
return 0;
}