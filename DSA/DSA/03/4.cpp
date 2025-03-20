#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x = 0, y = 0;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        int i = 0;
        while (i < n)
        {
            x = x * 10 + a[i++];
            if (i < n)
                y = y * 10 + a[i++];
        }
        cout << x + y << '\n';
    }
    return 0;
}