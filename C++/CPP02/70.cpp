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
        int ans = 0;
        cin >> m >> n;
        int a[m + 5][n + 5], b[3][3];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> b[i][j];
        for (int i = 0; i <= m - 3; i++)
            for (int j = 0; j <= n - 3; j++)
                for (int l = 0; l < 3; l++)
                    for (int r = 0; r < 3; r++)
                        ans += b[l][r] * a[i + l][j + r];
        cout << ans << "\n";
    }
    return 0;
}