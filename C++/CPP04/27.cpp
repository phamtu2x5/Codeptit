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
        int cnt=0;
        for(auto &x:a)
            cin>>x;
        for(int i=0;i<n-1;i++)
            if(a[i+1] && a[i]==a[i+1])
            {
                a[i]*=2;
                a[i+1]=0;
            }
        for(int i=0;i<n;i++){
            if(a[i]){
                cout<<a[i]<<' ';
                cnt++;
            }
        }
        for(int i=1;i<=n-cnt;i++)
            cout<<"0 ";
        cout<<'\n';
    }
return 0;
}