#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int maxx = 1e9;
void solve(vector<int> a, int n)
{
    vector<int> b(n + 5);
    b[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (!a[i])
            b[i] = maxx;
        else if (a[i] >= n - i + 1)
            b[i] = 1;
        else
        {
            int min = maxx;
            for (int j = i + 1; j < n && j <= i + a[i]; j++)
                if (b[j] < min)
                    min = b[j];
            if (min != maxx)
                b[i] = min + 1;
            else
                b[i] = maxx;
        }
    }
    cout << b[0] << "\n";
}
signed main()
{
    fastio;
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        solve(a, n);
    }
    return 0;
}