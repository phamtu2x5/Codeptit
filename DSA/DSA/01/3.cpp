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
        int a[n + 2];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int l = n - 1, r = n;
        while (a[l] > a[l + 1])
            l--;
        if (l == -1)
        {
            for (int i = 1; i <= n; i++)
                a[i] = i;
        }
        else
        {
            while (a[r] < a[l])
                r--;
            swap(a[l], a[r]);
            int d = l + 1, c = n;
            while (d < c)
            {
                swap(a[d], a[c]);
                d++, c--;
            }
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}