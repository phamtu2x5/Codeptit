#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;

int t,n;
signed main() {
        string s,t;
        getline(cin,s);
        cin>>t;
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            if(tmp!=t)
                cout<<tmp<<" ";
        }
    return 0;
}