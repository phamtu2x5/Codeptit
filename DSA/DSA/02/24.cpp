#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n, a[100], b[100];
vector<string> ans;
void solve()
{
    string tmp;
    int cnt = 0;
    vector<int> res;
    for (int i = 1; i <= n; i++)
    {
        if (b[i])
        {
            res.push_back(a[i]);
            cnt++;
        }
    }
    if (cnt < 2)
        return;
    tmp += to_string(res[0]) + " ";
    for (int i = 1; i < res.size(); i++)
        if (res[i] < res[i - 1])
            return;
        else
        {
            tmp += to_string(res[i]) + " ";
        }
    ans.push_back(tmp);
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == n)
            solve();
        else
            Try(i + 1);
    }
}
signed main()
{
    fastio;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1);
    sort(ans.begin(), ans.end());
    for (auto x : ans)
        cout << x << '\n';
    return 0;
}