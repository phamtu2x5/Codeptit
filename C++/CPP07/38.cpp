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
        cin>>n;
        vector<int>a(n);
        for(int &x:a)
            cin>>x;
        int ans=0;
        while(*max_element(a.begin(),a.end())!=0){
            for(int &x:a)
                if(x&1){
                    x--;
                    ans++;
                }           
            for(int &x:a)
                x/=2;
                ans++;
        }
        cout<<ans-1<<"\n";
    }
return 0;
}