#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    cin>>n;
    vector<int>b(n*n);
    vector<vector<int>>a(n+1,vector<int>(n+1,0));
    for(auto &x:b)
        cin>>x;
    sort(b.begin(),b.end());
    int l=1,r=n;
    while(b.size()){
        for(int i=l;i<=r;i++)   
        {
            a[l][i]=*b.begin();
            b.erase(b.begin());
        }
        for(int i=l+1;i<=r;i++)   
        {
            a[i][r]=*b.begin();
            b.erase(b.begin());
        }
        for(int i=r-1;i>=l;i--)   
        {
            a[r][i]=*b.begin();
            b.erase(b.begin());
        }
        for(int i=r-1;i>=l+1;i--)   
        {
            a[i][l]=*b.begin();
            b.erase(b.begin());
        }
        l++,r--;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}