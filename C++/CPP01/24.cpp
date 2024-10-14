#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t,n;
signed main() {
        cin>>n;
        for(int i=2;i*i<=n;i++){
            int d=0;
            if(n%i==0){
                while(n%i==0){
                    d++;
                    n/=i;
                }
            }
            if(d>0){
                cout<<i<<" "<<d<<"\n";
            }
        }
        if(n>1)
            cout<<n<<" "<<1<<"\n";
    return 0;
}