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
        int l = 0, r = n - 1, ok = 1;
        while (l <= r)
        {
            if (a[l] > a[r])
                swap(a[l], a[r]);
            l++, r--;
        }
        for (int i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1])
            {
                ok = 0;
                break;
            }
        if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}