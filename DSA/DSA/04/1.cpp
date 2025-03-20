#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m = 1e9 + 7, n, k;
int pow2(int n, int k)
{
    if (k == 0)
        return 1;
    int s = pow2(n, k / 2);
    s = s * s % m;
    if (k & 1)
        s = (s * n) % m;
    return s;
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << pow2(n, k) << '\n';
    }
    return 0;
}