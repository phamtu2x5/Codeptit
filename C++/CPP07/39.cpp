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
        cin>>s;
        stack<int>st;
        int num=1;
        st.push(1);
        for(int i=0;i<s.size();i++){
            ++num;
            if(s[i]=='I'){
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
            }
            st.push(num);
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<'\n';
    }
return 0;
}