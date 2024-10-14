#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int pow(int n,int m){
    if(!m)  return 1;
    int a=pow(n,m/2);
    if(m%2==0)
        return (a*a)%5;
    else return (a*a*n)%5;
}
int t;
signed main() {
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int res=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
            if(s[i]-'0')
                res+=pow(2ll,i);
        if(res%5==0)
            cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}