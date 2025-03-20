#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int t, ans, res, n;
int a[100][100], c[100];
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!c[j])
        {
            c[j] = 1;
            res += a[i][j];
            if (i == n)
            {
                if (res > ans)
                    ans = res;
            }
            else
                Try(i + 1);
            c[j] = 0;
            res -= a[i][j];
        }
    }
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        ans = -1e9, res = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            c[i] = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        Try(1);
        cout << ans << "\n";
    }
    return 0;
}