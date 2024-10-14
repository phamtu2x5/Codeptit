#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int a[25],b[25];
void in(){
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}
void Try(int i){
    for(int j=1;j<=n;j++)
    {
        if(!b[j]){
            b[j]=1;
            a[i]=j;
            if(i==n)
                in();
            else Try(i+1);
            b[j]=0;
        }
        
    }
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n;
        Try(1);
        cout<<'\n';
    }
return 0;
}