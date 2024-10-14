#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int a[25],k;
void in(){
    for(int i=1;i<=k;i++)
        cout<<a[i];
    cout<<" ";
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            in();
        }
        else Try(i+1);
    }
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        cin>>n>>k;
        Try(1);
        cout<<"\n";
    }
    return 0;
}