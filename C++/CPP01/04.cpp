#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int gt(int x){
	if(x==1)
		return 1;
	return x*gt(x-1);
}
int n,s;
signed main() {
    cin>>n;
    for(int i=1;i<=n;i++)
    	s+=gt(i);
    cout<<s;
    return 0;
}