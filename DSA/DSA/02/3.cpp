#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n, a[100][100];
vector<string> ans;
void Try(int x, int y, string s)
{
    if (x > n || y > n || a[x][y] == 0)
        return;
    if (x == n && y == n)
        ans.push_back(s);
    Try(x + 1, y, s + "D");
    Try(x, y + 1, s + "R");
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        ans.clear();
        Try(1, 1, "");
        if (ans.empty() || !a[1][1])
            cout << "-1\n";
        else
        {
            for (auto x : ans)
                cout << x << ' ';
            cout << '\n';
        }
    }
    return 0;
}