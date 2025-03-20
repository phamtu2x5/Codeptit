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
        string s;
        cin >> s;
        vector<int> a(26, 0);
        for (auto x : s)
            a[x - 'a']++;
        int res = 0;
        for (int i = 0; i < 26; i++)
            res = max(res, a[i]);
        int n = s.size();
        if (n & 1)
        {
            if (res <= (n + 1) / 2)
                cout << "1\n";
            else
                cout << "-1\n";
        }
        else
        {
            if (res <= n / 2)
                cout << "1\n";
            else
                cout << "-1\n";
        }
    }
    return 0;
}