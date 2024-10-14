#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t;
string s;
int kt(string s){
	for(int i=0;i<s.size()-1;i++)
		if(abs(s[i]-s[i+1])!=1)
			return 0;
	return 1;
}
signed main() {
    cin>>t;
    while(t--){
    	cin>>s;
    	if(kt(s))
    		cout<<"YES\n";
    	else cout<<"NO\n";
    }
    return 0;
}