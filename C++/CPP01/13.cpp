#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int kt(string s){
	if(s.size()<2) return 0;
	if(s.substr(s.size()-2,2)=="86")
		return 1;
	return 0;
}
int t;
string s;
signed main() {
    cin>>t;
    while(t--){
    	cin>>s;
    	if(kt(s))
    		cout<<"1\n";
    	else cout<<"0\n";
    }
    return 0;
}