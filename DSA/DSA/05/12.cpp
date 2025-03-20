#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m = 1e9 + 7, n, k, a[1005][1005];
int ckn(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    if (a[n][k] == 0)
        a[n][k] = ckn(n - 1, k - 1) + ckn(n - 1, k);
    return a[n][k];
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << ckn(n, k) << '\n';
    }
    return 0;
}