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
        if (n > 1e12)
        {
            cout << "0\n";
            continue;
        }
        int sum = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                sum += i + n / i;
                if (i * i == n)
                    sum -= i;
            }
        }
        sum == 2 * n ? cout << "1\n" : cout << "0\n";
    }
    return 0;
}