#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t = 1e9 + 7, m, n;
int pow2(int m, int n)
{
    if (!n)
        return 1;
    int s = pow2(m, n / 2);
    s = (s * s) % t;
    if (n & 1)
        s = (s * m) % t;
    return s;
}
signed main()
{
    fastio;
    while (1)
    {
        cin >> m >> n;
        if (m == n && n == 0)
            break;
        else
            cout << pow2(m, n) << '\n';
    }
    return 0;
}