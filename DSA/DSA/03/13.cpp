#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
int solve(int n, string s, vector<int> &a)
{
    for (int i = 0; i <= 25; i++)
        if (a[i])
        {
            if ((a[i] - 1) * n + 1 > s.size())
                return -1;
        }
    return 1;
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        vector<int> a(26, 0);
        for (auto x : s)
            a[x - 'A']++;
        cout << solve(n, s, a) << '\n';
    }
    return 0;
}