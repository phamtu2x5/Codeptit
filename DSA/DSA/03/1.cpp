#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int cnt = 0;
        while (n > 0)
        {
            for (int j = 9; j >= 0; j--)
            {
                int s = n / a[j];
                cnt += s;
                n -= s * a[j];
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}