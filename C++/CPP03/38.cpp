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
        int k,res=0;
        cin>>s>>k;
        n=s.size();
        for(int l=0;l<n;l++){
            unordered_map<char,int>freq;
            int cnt=0;
            for(int r=l;r<n;r++)
            {
                if(!freq[s[r]])
                    cnt++;
                freq[s[r]]++;
                if(cnt==k)
                    res++;
                if(cnt>k)
                    break;
            }
        }
        cout<<res<<"\n";
    }
return 0;
}