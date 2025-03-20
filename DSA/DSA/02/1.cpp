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
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i != 0)
                cout << ' ' << a[i];
            else
                cout << a[i];
        }
        cout << "]\n";
        for (int i = 1; i < n; i++)
        {
            cout << "[";
            for (int j = 0; j < n - i; j++)
            {
                a[j] += a[j + 1];
                if (j != 0)
                    cout << ' ' << a[j];
                else
                    cout << a[j];
            }
            cout << "]\n";
        }
    }
    return 0;
}