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
void solve(int n){
    vector<int>st;
    while(n>1)
    {
        st.push_back(min_prime[n]);
        n/=min_prime[n];
    }
    st.size()==3? cout<<"1\n":cout<<"0\n";
}
signed main() {
    fastio
    pre();
    cin>>t;
    while(t--){
        cin>>n;
        solve(n);
    }
return 0;
}