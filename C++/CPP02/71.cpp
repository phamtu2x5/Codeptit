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
    int t, m, n, k;
    cin >> t;
    while (t--)
    {
        cin >> m >> n >> k;
        int a[m + 5][n + 5];
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        for (int i = k; i <= m; i++)
        {
            for (int j = k; j <= n; j++)
            {
                int tmp = a[i][j] - a[i][j - k] - a[i - k][j] + a[i - k][j - k];
                cout << floor(tmp / (k * k)) << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}