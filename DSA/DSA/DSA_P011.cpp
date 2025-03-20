#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int t, m, n, ans;
char a[1000][1000];
bool vs[1000][1000];
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
bool ok(int i, int j)
{
    return (1 <= i && i <= m && 1 <= j && j <= n);
}
void Try(int i, int j)
{
    vs[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        int nx = i + dx[k], ny = j + dy[k];
        if (ok(nx, ny) && !vs[nx][ny] && a[nx][ny] == '#')
            Try(nx, ny);
    }
}
signed main()
{
    fastio;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == '#' && !vs[i][j])
            {
                ++ans;
                Try(i, j);
            }
        }
    }
    cout << ans;
    return 0;
}