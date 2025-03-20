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
        int s = 0, x;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> a;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            a.push(x);
        }
        while (a.size() > 1)
        {
            x = a.top();
            a.pop();
            x += a.top();
            a.pop();
            a.push(x);
            s += x;
        }
        cout << s << '\n';
    }
    return 0;
}