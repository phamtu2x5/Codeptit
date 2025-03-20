#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n, k;
int solve(int n, int k)
{
    m = pow(2, n) - 1;
    if (k == (m + 1) / 2)
        return n;
    else if (k > (m + 1) / 2)
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
        cout << char('A' + solve(n, k) - 1) << '\n';
    }
    return 0;
}
/*
1 A
2 ABA
3 ABACABA
*/