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
    cin >> t;
    while (t--)
    {
        int ans = 1e9;
        cin >> n >> m;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        int l = 0, r = 0, s = 0;
        while (r <= n - 1)
        {
            while (s <= m && r < n)
                s += a[r++];
            while (s > m && l < n)
            {
                ans = min(ans, r - l);
                s -= a[l++];
            }
        }
        ans <= n ? cout << ans : cout << "-1";
        cout << "\n";
    }
    return 0;
}