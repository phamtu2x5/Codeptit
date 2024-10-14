#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    int n;
    cin >> n;
    cin.ignore();
    string s;
    set<string> st;
    for(int i=1;i<=n;i++)
    {
        getline(cin, s);
        st.insert(s);
    }
    cout << st.size();
}