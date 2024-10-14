#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int n;
double s;
signed main() {
    cin>>n;
    for(int i=1;i<=n;i++)
    	s+=1.0/i;
    cout<<setprecision(4)<<fixed<<s;
    return 0;
}