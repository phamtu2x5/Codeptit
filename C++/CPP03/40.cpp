#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
int cnt(string s, int m, int n)
{
    int dp[m][n];
    memset(dp, 0, sizeof(dp));
    dp[0][(s[0] - '0') % n]++;
    for (int i = 1; i < m; i++)
    {
        dp[i][(s[i] - '0') % n]++;
        for (int j = 0; j < n; j++)
        {
            dp[i][j] += dp[i - 1][j];
            dp[i][(j * 10 + s[i] - '0') % n] += dp[i - 1][j];
        }
    }
    return dp[m - 1][0];
}
signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        cin >> m >> n;
        string s;
        cin >> s;
        cout << cnt(s, m, n) << "\n";
    }
    return 0;
}