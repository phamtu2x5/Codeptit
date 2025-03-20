#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int t, m, n, b[100];
string s;
unordered_map<string, bool> a1;
vector<string> a;
void Try(int i, int len)
{
    for (int j = b[i - 1] + 1; j <= len - m + i; j++)
    {
        b[i] = j;
        if (i == m)
        {
            for (int t = 1; t <= m; t++)
                cout << a[b[t]] << " ";
            cout << "\n";
        }
        else
            Try(i + 1, len);
    }
}
signed main()
{
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (!a1[s])
        {
            a.push_back(s);
            a1[s] = true;
        }
    }
    sort(a.begin(), a.end());
    a.insert(a.begin(), " ");
    Try(1, a.size() - 1);
    return 0;
}