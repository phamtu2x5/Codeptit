#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t;
string s;
int kt(string s){
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r])
			return 0;
		l++;
		r--;
	}
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