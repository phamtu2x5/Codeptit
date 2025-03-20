#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
void solve()
{
    int ans = -1e9;
    int a[m + 5][n + 5];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            for (int l = i; l <= m; l++)
                for (int r = j; r <= n; r++)
                    ans = max(ans, a[l][r] - a[l][j - 1] - a[i - 1][r] + a[i - 1][j - 1]);
    cout << ans << "\n";
}
signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        cin >> m >> n;
        solve();
    }
    return 0;
}