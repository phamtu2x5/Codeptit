#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;

int t,n;
signed main() {
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<int>>a(n+5,vector<int>(n+5));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                if(i==1 || i==n)
                    cout<<a[i][j]<<" ";
                else{
                    if(j==1 || j==n)
                        cout<<a[i][j]<<" ";
                    else cout<<"  ";
                }
            cout<<"\n";
        }
    }
    return 0;
}