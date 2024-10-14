#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t,x,y,z,n;
signed main() {
    int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k;
		for(int i=2;i*i<=n;i++){
			while(n%i==0){
				n=n/i;
				k=i;
			}
		}
		if(n!=1)
			cout<<n<<'\n';
		else
			cout<<k<<'\n';
	}
}