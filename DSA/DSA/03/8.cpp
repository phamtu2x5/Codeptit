#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
int cmp(pair<int, int> x, pair<int, int> y)
{
    return x.second < y.second;
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        int cnt = 1;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (auto &x : a)
            cin >> x.first;
        for (auto &x : a)
            cin >> x.second;
        sort(a.begin(), a.end(), cmp);
        int right = a[0].second;
        for (int i = 1; i < n; i++)
            if (a[i].first >= right)
            {
                cnt++;
                right = a[i].second;
            }
        cout << cnt << '\n';
    }
    return 0;
}