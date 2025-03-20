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
        vector<int> a(n), b(n - 1);
        for (auto &x : a)
            cin >> x;
        // 0 - (n-1)
        for (auto &x : b)
            cin >> x;
        // 0-  (n-2)
        int ok = 1, l = 0, r = n - 2;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == b[mid])
                l = mid + 1;
            else
                r = mid;
        }
        if (a[r] != b[r])
            cout << r + 1 << '\n';
        else
            cout << n << '\n';
    }
    return 0;
}