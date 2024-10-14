#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t;
double a,b,c,d,s;
signed main() {
    cin>>t;
    while(t--){
    	cin>>a>>b>>c>>d;
    	s=sqrt((c-a)*(c-a) + (d-b)*(d-b));
    	cout<<setprecision(4)<<fixed<<s<<"\n";
    }
    return 0;
}