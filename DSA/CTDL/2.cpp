#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int t, m, n, k, a[100], b[100], ans;
void in()
{
    for (int i = 1; i <= n; i++)
    {
        if (b[i])
            cout << a[i] << ' ';
    }
    cout << "\n";
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == n)
        {
            int res = 0;
            for (int t = 1; t <= n; t++)
                res += (b[t] == 1) ? a[t] : 0;
            if (res == k)
            {
                ans++;
                in();
            }
        }
        else
            Try(i + 1);
    }
}
signed main()
{
    fastio;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(1);
    cout << ans;
    return 0;
}