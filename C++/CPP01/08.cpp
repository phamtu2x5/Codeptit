#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n,f[15];
int kt(int x){
    if(x<2) return 0;
    if(x<=3) return 1;
    if(x%2==0 || x%3==0)    return 0;
    for(int i=5;i*i<=x;i+=6)
        if(x%i==0 || x%(i+2)==0)
            return 0;
    return 1;
}
void cal_up(int len,int i,int k,int prev){
    if(i>=len){
        f[len]+=kt(k);
        return ;
    }
    for(int j=prev+1;j<=9;j++)
        cal_up(len,i+1,k*10+j,j);
}
void cal_down(int len,int i,int k,int prev){
    if(i>=len){
        f[len]+=kt(k);
        return ;
    }
    for(int j=prev-1;j>=0;j--)
        cal_down(len,i+1,k*10+j,j);
}
signed main() {
    fastio
    for(int i=2;i<=9;i++)
        {
            cal_up(i,0,0,0);
            cal_down(i,0,0,10);
        }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<f[n]<<"\n";
    }
return 0;
}