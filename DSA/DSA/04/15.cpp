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
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        int tmp = upper_bound(a.begin(), a.end(), k) - a.begin();
        cout << (tmp == 0 ? -1 : tmp) << '\n';
    }
    return 0;
}