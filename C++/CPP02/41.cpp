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
        vector<int>a(n+5);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int l=1,r=n,res=0;
        while(l<=r){
            while(a[l]!=a[r]){
                res++;
                if(a[l]<a[r]){
                    l++;
                    a[l]+=a[l-1];
                }  
                else {
                    r--;
                    a[r]+=a[r+1];
                }
            }
            l++;r--;
        }
        cout<<res<<"\n";
    }
return 0;
}