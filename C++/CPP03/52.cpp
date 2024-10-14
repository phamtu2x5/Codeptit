#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    unordered_map<string,int>mp;
    cin>>t;
    cin.ignore();
    while(t--){
        vector<string>ans;
        string s;
        getline(cin,s);
        stringstream ss(s);
        string str;
        while(ss>>str){
            ans.push_back(str);
        }
        string res=*ans.rbegin();
        for(auto i=0;i<ans.size()-1;i++)
        {
            res+=ans[i][0];
        }
        for(auto &x:res){
            x=tolower(x);
        }
        if(mp[res]!=0){
            cout<<res<<mp[res]+1<<"@ptit.edu.vn\n";
            mp[res]++;
        }
        else {
        cout<<res<<"@ptit.edu.vn\n";
        mp[res]++;
        }
    }
return 0;
}