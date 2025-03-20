#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n, k;
int pow2(int n, int k)
{
    if (k == 0)
        return 1;
    int s = pow2(n, k / 2);
    s *= s;
    if (k & 1)
        s *= n;
    return s;
}
int solve(int n, int k)
{
    m = pow2(2, n + 1) - 1;
    if (k == (m + 1) / 2)
        return n + 1;
    if (k > (m + 1) / 2)
        return solve(n - 1, k - (m + 1) / 2);
    else
        return solve(n - 1, k);
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << solve(n - 1, k) << '\n';
    }
    return 0;
}
/*
1 2^2-1=3
2 2^3-1=
3 2^4-1
*/