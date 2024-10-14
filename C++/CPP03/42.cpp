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
        int sum=0;
        vector<char>ans;
        for(auto x:s)
            if(isalpha(x))
                ans.push_back(x);
            else sum+=x-'0';
        sort(ans.begin(),ans.end());
        for(auto x:ans)
            cout<<x;
        cout<<sum<<"\n";
    }
return 0;
}