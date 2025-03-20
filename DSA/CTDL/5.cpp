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
    int t, m, n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    cin >> m;
    for (auto x : a)
        if (x != m)
            cout << x << " ";
    return 0;
}