#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int m,s;
void minX(int m,int s){
    vector<int>a;
    m--;
    while(m){
        int t=min(9ll,s-1);
        s-=t;
        a.push_back(t);
        m--;
    }
    a.push_back(s);
    reverse(a.begin(),a.end());
    for(auto x:a)
        cout<<x;
    cout<<" ";
}
void maxX(int m,int s){
    vector<int>a;
    while(m){
        int t=min(9ll,s);
        s-=t;
        a.push_back(t);
        m--;
    }
    for(auto x:a)
        cout<<x;
}
signed main() {
    fastio
    cin>>m>>s;
    
    if((!s && m!=1) ||  s>9*m){
        cout<<"-1 -1";
        return 0;
    }
    minX(m,s);
    maxX(m,s);
    return 0;
}