#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        n=s.size();
        int i=0;
        while(i<n){
            int d=1;
            while(s[i]==s[i+1]){
                d++;
                i++;
            }
            cout<<s[i]<<d;
            i++;
        }
        cout<<"\n";
    }
return 0;
}