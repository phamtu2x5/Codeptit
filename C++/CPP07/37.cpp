#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,k;
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>a(n);
        for(int &x:a)
            cin>>x;
        int res=0,l=0,r=k-1;
        for(int i=l;i<=r;i++)
            res+=a[i];
        int max_sum=res;
        for(int i=k;i<n;i++){
            int res=res-a[i-k]+a[i];
            if(res>max_sum){
                max_sum=res;
                r=i;
                l=r-k+1;
            }
        }
        for(int i=l;i<=r;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
return 0;
}