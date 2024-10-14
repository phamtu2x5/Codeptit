#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;

int t,n;
signed main() {
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int res=0;
        for(int i=0;i<s.size();i++)
            res+=(s[i]-'0')* (i%2==0 ? 1 :-1);
        if(res%11==0)
            cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}