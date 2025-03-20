#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int t, m, n;
int a[100];
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - m + i; j++)
    {
        a[i] = j;
        if (i == m)
        {
            for (int t = 1; t <= m; t++)
            {
                cout << char('A' + a[t] - 1);
            }
            cout << '\n';
        }
        else
            Try(i + 1);
    }
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        Try(1);
    }

    return 0;
}