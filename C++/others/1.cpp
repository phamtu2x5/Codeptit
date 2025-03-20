#include <bits/stdc++.h>
#define int long long
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

signed main()
{
    fastio;
    int n, m, x, y, ans = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        pq.push(m);
    }

    while (pq.size() > 1)
    {
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        ans += x + y;
        pq.push(x + y);
    }
    cout << ans << " " << pq.top();
    return 0;
}
