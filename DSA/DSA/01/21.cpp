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
        cin >> n >> m;
        int a[n + 5];
        unordered_map<int, bool> mp;
        for (int i = 1; i <= m; i++)
        {
            cin >> a[i];
            mp[a[i]] = true;
        }
        int res = 0, l = m;
        while (a[l] == n - m + l)
            l--;
        if (l >= 0)
        {
            ++a[l];
            for (int i = l + 1; i <= m; i++)
                a[i] = a[i - 1] + 1;
        }
        else
        {
            for (int i = 1; i <= m; i++)
                a[i] = i;
        }
        for (int i = 1; i <= m; i++)
            if (mp[a[i]])
                res++;
        cout << m - res << "\n";
    }
    return 0;
}