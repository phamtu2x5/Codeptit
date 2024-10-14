#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    cin>>n;
    int d=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        if(i==1){
            cout<<"*";
        }
        else if(i==n){
            for(int j=1;j<=n;j++)
                cout<<"* ";
        }
        else{
            cout<<"*";
            for(int j=1;j<=d;j++)
                cout<<" ";
            cout<<"*";
            d+=2;
        }
        cout<<"\n";
    }
    return 0;
}