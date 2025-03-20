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
        vector<vector<int>> res;
        for (auto &x : a)
            cin >> x;
        res.push_back(a);
        for (int i = 1; i < n; i++)
        {
            vector<int> tmp;
            for (int j = 0; j < n - i; j++)
            {
                a[j] += a[j + 1];
                tmp.push_back(a[j]);
            }
            res.push_back(tmp);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << '[';
            for (int j = 0; j < res[i].size(); j++)
            {
                if (j != 0)
                    cout << ' ' << res[i][j];
                else
                    cout << res[i][j];
            }
            cout << "] ";
        }
        cout << '\n';
    }

    return 0;
}