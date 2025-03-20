#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, n, ans;
signed main()
{
    fastio
            cin >>
        n;
    vector<string> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (a[i].find(a[j]) != string::npos)
                {
                    // cout << a[i] << " " << a[j] << "\n";
                    ans++;
                }
            }
        }
    }
    cout << ans;
    return 0;
}