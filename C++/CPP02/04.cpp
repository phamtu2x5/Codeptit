#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int a[N],f[N];
void pre(){
    for(int i=2;i<N;i++)
        f[i]=1;
    for(int i=2;i*i<N;i++)
        if(f[i])
            for(int j=i*i;j<N;j+=i)
                f[j]=0;
    for(int i=2;i<N;i++)
        a[i]=(f[i])?a[i-1]+1:a[i-1];
}
int t,l,r;
signed main() {
    fastio
    pre();
    cin>>t;
    while(t--){
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<"\n";
    }
return 0;
}