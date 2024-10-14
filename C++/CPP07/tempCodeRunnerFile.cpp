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
        string s,res="";
        cin>>s;
        int i=0,cnt=0;
        while(s[i]=='D' && i < s.size()){
            cnt++;
            i++;
        }
        res=(cnt+1)+'0';
        int lmin=1,lmax=cnt+1;
        while(cnt){
            res+=(cnt--)+'0';
        }
        for(int i=0;i<s.size();i++){
            cnt=0;
            if(s[i]=='I'){
                int j=i+1;
                while(s[j]=='D' && j<s.size())
                {
                    cnt++;
                    j++;   
                }
                lmax+=(cnt+1);
                res+=lmax+'0';
            }
            else{
                res+=(res.back()+1);
            }
        }
        cout<<res<<"\n";
    }
return 0;
}