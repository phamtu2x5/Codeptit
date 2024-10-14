#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int n,k;
signed main() {
    int t;
	cin>>t;
	while(t--){
		int n,res=0,kt=0;
		cin>>n>>k;
        int i=2;
        while(i<=n && !kt){
            while(n%i==0){
                n/=i;
                res++;
                if(res==k){
                    cout<<i<<"\n";
                    kt=1;
                }
            }
            i++;
        }
        if(!kt)
            cout<<"-1\n";
        
	}
}