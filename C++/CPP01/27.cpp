#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int n;
int kt(int x){
    if(x<2) return 0;
    if(x<=3) return 1;
    if(x%2==0 || x%3==0)    return 0;
    for(int i=5;i*i<=x;i+=6)
        if(x%i==0 || x%(i+2)==0)
            return 0;
    return 1;
}
signed main() {
    int t;
	cin>>t;
	while(t--){
		int n,ok=0;
		cin>>n;
		if(n<=3){
			cout<<"-1\n";
            continue;
		}
		for(int i=2;i<=n/2;i++)
			if(kt(i)&&kt(n-i)){
				cout<<i<<" "<<n-i<<"\n";
                ok=1;
                break;
			}
        if(!ok)    
		    cout<<"-1\n";
	}
}
