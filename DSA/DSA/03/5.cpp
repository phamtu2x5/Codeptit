#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        int x = 0, y = 0;
        sort(a.begin(), a.end());
        if (m <= n / 2)
        {
            for (int i = 0; i < m; i++)
                x += a[i];
            for (int i = m; i < n; i++)
                y += a[i];
            cout << abs(x - y) << '\n';
        }
        else
        {
            for (int i = 0; i < n - m; i++)
                x += a[i];
            for (int i = n - m; i < n; i++)
                y += a[i];
            cout << abs(x - y) << '\n';
        }
    }
    return 0;
}