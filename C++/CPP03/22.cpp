#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
int cmp(string a, string b) {
    if (a.size() > b.size()) return 1;
    if (a.size() < b.size()) return 0;
    return a >= b;
}
void add(string a,string b){
    string res="";
    int carry=0,n1=a.size(),n2=b.size();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<n2;i++){
        int sum=(a[i]-'0')+(b[i]-'0')+carry;
        if(sum>=10){
            sum-=10;
            carry=1;
        }
        else carry=0;
        res.push_back(sum+'0');
    }
    for(int i=n2;i<n1;i++){
        int sum=(a[i]-'0')+carry;
        if(sum>=10){
            sum-=10;
            carry=1;
        }
        else carry=0;
        res.push_back(sum+'0');
    }
    if(carry)
        res.push_back('1');
    reverse(res.begin(),res.end());
    cout<<res<<"\n";
}
signed main() {
    fastio
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(cmp(a,b))
            add(a,b);
        else add(b,a);
    }
return 0;
}