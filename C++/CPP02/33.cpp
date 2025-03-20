#include <bits/stdc++.h>
#define int long long
#define N 100005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n, tmp;
int ans[N];
signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        tmp = 0;
        cin >> m >> n;
        int a[m + 5][n + 5];
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        int hbd = 1, hkt = m, cbd = 1, ckt = n;
        while (tmp < m * n)
        {
            if (tmp == m * n)
                break;
            for (int i = cbd; i <= ckt; i++)
            {
                ans[++tmp] = a[hbd][i];
            }
            if (tmp == m * n)
                break;
            for (int i = hbd + 1; i <= hkt; i++)
            {
                ans[++tmp] = a[i][ckt];
            }
            if (tmp == m * n)
                break;
            for (int i = ckt - 1; i >= cbd; i--)
            {
                ans[++tmp] = a[hkt][i];
            }
            if (tmp == m * n)
                break;
            for (int i = hkt - 1; i >= hbd + 1; i--)
            {
                ans[++tmp] = a[i][hbd];
            }
            hbd++, hkt--, cbd++, ckt--;
        }
        for (int i = tmp; i >= 1; i--)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}