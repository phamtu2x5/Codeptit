#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

signed main()
{
    fastio;
    string s;
    cin >> s;
    vector<int> a(26, 0);
    for (auto x : s)
        a[x - 'a']++;
    set<int> st;
    int cnt = 0;
    for (int i = 0; i <= 25; i++)
        if (a[i] > 0)
        {
            st.insert(a[i]);
            if (a[i] == 1)
                cnt++;
        }
    if (st.size() > 2)
    {
        cout << "29tech";
    }

    else if (st.size() == 2)
    {
        int x = *st.begin();
        st.erase(st.begin());
        int y = *st.begin();
        if (y - x == 1 || (x == 1 && cnt == 1))
            cout << "28tech";
        else
            cout << "29tech";
    }
    else
        cout << "28tech";
    return 0;
}