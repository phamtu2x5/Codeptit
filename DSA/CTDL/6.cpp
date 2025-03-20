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
    int t, m, n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, bool> mp;
    for (auto &x : a)
    {
        cin >> x;
        mp[x] = true;
    }
    for (auto x : a)
    {
        if (mp[x] == true)
        {
            cout << x << " ";
            mp[x] = false;
        }
    }
    return 0;
}