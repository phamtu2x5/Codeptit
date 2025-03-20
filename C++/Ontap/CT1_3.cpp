#include <bits/stdc++.h>
#define int long long
#define N 1005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
char a[N][N];
string f[N][N];
signed main()
{
    fastio;
    int t, m, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    if (a[1][1] == '1')
        f[1][1] = "1";
    else
        f[1][1] = "0";
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1)
                continue;
            if (i == 1)
                f[i][j] = f[i][j - 1] + a[i][j];
            else if (j == 1)
                f[i][j] = f[i - 1][j] + a[i][j];
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
        }
    string b = f[n][n];
    while (b.size() > 4 && b[0] == '0')
        b.erase(0, 1);
    while (b.size() % 4 != 0)
        b = "0" + b;
    for (int i = 0; i < b.size(); i += 4)
    {
        int x = (b[i] - '0') * 8 + (b[i + 1] - '0') * 4 + (b[i + 2] - '0') * 2 + (b[i + 3] - '0');
        if (x < 10)
            cout << x;
        else
            cout << char(x + 55);
    }
    return 0;
}