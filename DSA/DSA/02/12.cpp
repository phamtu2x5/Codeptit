#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
int ckn(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    return ckn(n - 1, k - 1) + ckn(n - 1, k);
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        int x;
        for (int i = 1; i <= m * n; i++)
            cin >> x;
        cout << ckn(m + n - 2, m - 1) << '\n';
    }
    return 0;
}