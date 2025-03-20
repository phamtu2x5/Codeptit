#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int cnt[6];
int solve(vector<int> b, int n, int x)
{
    if (x == 1)
        return cnt[0];
    int res = upper_bound(b.begin(), b.end(), x) - b.begin();
    res = n - res;
    res += cnt[0] + cnt[1];
    if (x == 2)
        res -= (cnt[3] + cnt[4]);
    if (x == 3)
        res += cnt[2];
    return res;
}
signed main()
{
    fastio;
    int t, m, n;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        memset(cnt, 0, sizeof(cnt));
        cin >> m >> n;
        vector<int> b(n);
        unordered_map<int, int> a;
        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }
        for (auto &x : b)
        {
            cin >> x;
            if (x < 5)
                cnt[x]++;
        }
        sort(b.begin(), b.end());
        for (auto x : a)
        {
            if (!x.first)
                continue;
            else
                ans += x.second * solve(b, n, x.first);
        }
        cout << ans << "\n";
    }
    return 0;
}