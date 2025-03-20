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
        cin >> n >> m;
        vector<int> a(m);
        for (auto &x : a)
            cin >> x;

        int l = m - 1;
        while (l >= 0 && a[l] == n - m + l + 1)
            l--;

        if (l >= 0)
        {
            a[l]++;
            for (int i = l + 1; i < m; i++)
                a[i] = a[i - 1] + 1;
        }
        else
        {
            for (int i = 0; i < m; i++)
                a[i] = i + 1;
        }

        for (int x : a)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
