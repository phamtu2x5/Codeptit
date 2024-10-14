#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t;
char x;
signed main() {
    cin>>t;
    while(t--){
    	cin>>x;
    	if(islower(x))
    		cout<<char(x-32)<<"\n";
    	else cout<<char(x+32)<<"\n";
    }
    return 0;
}