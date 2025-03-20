#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, n;
signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n + 5, 0);
        vector<int> sum(n + 5, 0);
        for (int i = 1; i <= n; i++)
            cin >> a[i], sum[i] = a[i];

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[j] > a[i])
                    sum[j] = max(sum[j], sum[i] + a[j]);
            }
        }
        int ans = -2e9;
        for (int i = 1; i <= n; i++)
            ans = max(ans, sum[i]);
        cout << ans << "\n";
    }
    return 0;
}