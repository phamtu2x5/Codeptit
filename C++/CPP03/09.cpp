#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;

int t,n;
signed main() {
    cin>>t;
    scanf("\n");
    while(t--){
        int cnt=0;
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss>>tmp) ++cnt;
        cout<<cnt<<"\n";
    }
    return 0;
}