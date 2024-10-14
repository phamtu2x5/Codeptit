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
        int res=-1;
        cin>>n;
        vector<int>a(n+5);
        vector<int>lmin(n+5);
        vector<int>rmax(n+5);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        lmin[1]=a[1];
        rmax[n]=a[n];
        for(int i=2;i<=n;i++)
            lmin[i]=min(lmin[i-1],a[i]);
        for(int i=n-1;i>=1;i--)
            rmax[i]=max(rmax[i+1],a[i]);
        int i=1,j=1;
        while(i<=n && j<=n){
            if(lmin[i]<rmax[j]){
                if(i!=j)
                res=max(res,j-i);
                j++;
            }
            else i++;
        }
        cout<<res<<"\n";
    }
return 0;
}