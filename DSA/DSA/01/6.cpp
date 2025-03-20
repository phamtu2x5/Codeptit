#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

signed main()
{
    fastio;
    int t, m, n;
    cin >> t;
    while (t--)
    {
        stack<string> ans;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            a[i] = i + 1;
        do
        {
            string s = "";
            for (auto x : a)
                s += to_string(x);
            ans.push(s);
        } while (next_permutation(a, a + n));
        while (ans.size())
        {
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << "\n";
    }
    return 0;
}