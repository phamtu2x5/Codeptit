#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, n, k;
signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            while (!dq.empty() && a[dq.back()] <= a[i])
                dq.pop_back();
            dq.push_back(i);
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            if (i >= k - 1)
                cout << a[dq.front()] << " ";
        }
        cout << "\n";
    }
    return 0;
}