#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s,ans;
signed main() {
    fastio
    getline(cin,s);
    stringstream ss(s);
    string str,last;
    while(ss>>str){
        str[0]=toupper(str[0]);
        for(int i=1;i<str.size();i++)
            str[i]=tolower(str[i]);
        last=str;
        ans+=str+" ";
    }
    for(auto&x:last)
        x=toupper(x);
    ans.erase(ans.end()-1);
    char x=*(ans.end()-1);
    while(x!=' '){
        ans.erase(ans.end()-1);
        x=*(ans.end()-1);
    }
    ans.erase(ans.end()-1);
    cout<<ans+", "+last;
    return 0;
}