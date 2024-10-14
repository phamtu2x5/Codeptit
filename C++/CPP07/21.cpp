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
        vector<int>a(n+5),b(n+5,1);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
            for(int j=i+1;j<=n;j++){
                if(a[j]>a[i]){
                    b[j]=max(b[j],b[i]+1);
                }
            }
        int res=*max_element(b.begin()+1,b.begin()+n+1);
        cout<<res<<"\n";
    }
return 0;
}