#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, n, k, ans;
int a[21][21], b[100];
void solve()
{
    int s = 0;
    for (int i = 1; i <= 2 * n - 2; i++)
        s += b[i];
    if (s == n - 1)
    {
        int i = 1, j = 1, sum = a[1][1];
        for (int z = 1; z <= 2 * n - 2; z++)
        {
            if (b[z] == 0)
                i++;
            else
                j++;
            sum += a[i][j];
        }
        if (sum == k)
            ans++;
    }
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == 2 * n - 2)
        {
            solve();
        }
        else
            Try(i + 1);
    }
}
signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        ans = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        Try(1);
        cout << ans << '\n';
    }
    return 0;
}