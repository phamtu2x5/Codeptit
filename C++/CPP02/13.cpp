#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int fi[93];
void init(){
    fi[0]=0;fi[1]=1;
    for(int i=2;i<=92;i++)
        fi[i]=fi[i-1]+fi[i-2];
}
signed main() {
    fastio
    init();
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(auto &x:a)
            cin>>x;
        for(auto x:a){
            int ok=binary_search(fi,fi+93,x);
            if(ok)
                cout<<x<<" ";
        }
        cout<<"\n";
    }
return 0;
}