#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;

int t,n,d;
signed main() {
    cin>>t;
    while(t--){
        cin>>n>>d;
        vector<int>a(n+5);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a.begin()+1,a.begin()+n+1);
        cout<<a[d]<<"\n";
    }
    return 0;
}