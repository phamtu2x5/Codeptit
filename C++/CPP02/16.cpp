#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int a[N];
int kt(int l,int r){
    int i=l;
    while(i<=r){
        if(a[i]>a[i+1])
            break;
        else i++;
    }
    while(i<r){
        if(a[i]<a[i+1])
            return 0;
        else i++;
    }
    return 1;
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int l,r;
        cin>>l>>r;
        if(kt(l,r))
            cout<<"Yes\n";
        else cout<<"No\n";
    }
return 0;
}