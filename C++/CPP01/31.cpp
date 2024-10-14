#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,min_prime[N];
void pre(){
    for(int i=2;i*i<N;i++)
        if(!min_prime[i])
            for(int j=i*i;j<N;j+=i)
                if(!min_prime[j])
                min_prime[j]=i;
    for(int i=2;i<N;i++)
        if(!min_prime[i])
            min_prime[i]=i;
}
signed main() {
    fastio
    pre();
    min_prime[1]=1;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            cout<<min_prime[i]<<" ";
        cout<<"\n";
    }
return 0;
}