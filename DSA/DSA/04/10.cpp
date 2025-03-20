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
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        int ans = -1e9, s = 0;
        for (int i = 0; i < n; i++)
        {
            if (s + a[i] <= a[i])
            {
                ans = max(ans, s);
                s = a[i];
            }
            else
            {
                s += a[i];
                ans = max(ans, s);
            }
        }
        cout << max(ans, s) << '\n';
    }
    return 0;
}
/*
1
8
-2 -5 6 -2 -3 1 5 -6
-2
-5
6

 */