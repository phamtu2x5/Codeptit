#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n, k;
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        vector<int> a(m + n);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        cout << a[k - 1] << '\n';
    }
    return 0;
}