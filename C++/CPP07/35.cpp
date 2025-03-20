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
        bool ok = true;
        cin >> m >> n;
        int k = min(m, n);
        int a[m + 5][n + 5];
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        for (int size = k; size >= 1 && ok; size--)
        {
            for (int i = size; i <= m && ok; i++)
            {
                for (int j = size; j <= n && ok; j++)
                {
                    int s = size * size;
                    if (s == (a[i][j] - a[i][j - size] - a[i - size][j] + a[i - size][j - size]))
                    {
                        ok = false;
                        ans = size;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}