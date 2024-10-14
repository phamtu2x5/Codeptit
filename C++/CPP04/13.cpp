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
        cin>>n;
        vector<int>a(n);
        vector<int>ans;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        while(!a.empty()){
            if(!a.empty()){
            ans.insert(ans.end(),a.back());
            a.pop_back();
            }
            if(!a.empty()){
            ans.insert(ans.end(),a.front());
            a.erase(a.begin());
        }
        }
        for(auto x:ans)
            cout<<x<<" ";
        cout<<"\n";
    }
return 0;
}