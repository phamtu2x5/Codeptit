#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

signed main()
{
    fastio;
    int k, n;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    int ans = 1e9;
    for (int i = 0; i <= n - k; i++)
    {
        ans = min(ans, a[i + k - 1] - a[i]);
    }
    cout << ans;
    return 0;
}