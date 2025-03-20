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
        vector<int> a;
        for (int i = 1; i <= n; i++)
            a.push_back(i);
        do
        {
            bool ok = true;
            for (int i = 1; i < n; i++)
                if (abs(a[i] - a[i - 1]) == 1)
                {
                    ok = false;
                    break;
                }
            if (ok)
            {
                for (auto x : a)
                    cout << x;
                cout << '\n';
            }

        } while (next_permutation(a.begin(), a.end()));
        cout << '\n';
    }
    return 0;
}