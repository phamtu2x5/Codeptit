#include <bits/stdc++.h>
#define int long long
#define N 1005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, n;
int ans = -2e9;
int cc[N][N], cp[N][N], a[N][N];
signed main()
{
    fastio
            cin >>
        n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cc[i][j] = cc[i - 1][j - 1] + a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = n; j >= 1; j--)
            cp[i][j] = cp[i - 1][j + 1] + a[i][j];
    for (int sz = 2; sz <= n; sz++)
    {
        for (int i = sz; i <= n; i++)
            for (int j = sz; j <= n; j++)
                ans = max(ans, (cc[i][j] - cc[i - sz][j - sz]) - (cp[i][j - sz + 1] - cp[i - sz][j + 1]));
    }
    cout << ans;
    return 0;
}
w