#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m = 1e9 + 7, n;
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        int s = 0;
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
            s = (s + (a[i] * i)) % m;
        cout << s << '\n';
    }
    return 0;
}