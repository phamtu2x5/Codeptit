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
        int x,cnt0=0,cnt1=0,cnt2=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>x;
            if(x==0)    cnt0++;
            else if(x==1) cnt1++;
            else cnt2++;
        }
        while(cnt0--)
            cout<<"0 ";
        while(cnt1--)
            cout<<"1 ";
        while(cnt2--)
            cout<<"2 ";
        cout<<"\n";
    }
return 0;
}