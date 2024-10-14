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
        set<int>st;
        vector<int>a;
        for(int i=1;i<=n;i++)
            {
                int x;
                cin>>x;
                st.insert(x);
            }
        for(auto x:st)
            a.push_back(x);
        if(a.size() == 1){
            cout << 0 << '\n';
            continue;
        }
        int res=1;
        int ma=*st.rbegin();
        for(int i=2;i<=ma;i++){
            int ok=1;
            for(auto x:a)
                if(x%i != ma%i){
                    ok=0;
                    break;
                }
            if(ok) res++;
        }
        cout<<res<<"\n";
    }
return 0;
}