#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
int b[100];
vector<int> a;
void Try(int i)
{
    for (int j = b[i - 1] + 1; j <= a.size() - m + i; j++)
    {
        b[i] = j;
        if (i == m)
        {
            for (int t = 1; t <= m; t++)
                cout << a[b[t] - 1] << " ";
            cout << '\n';
        }
        else
            Try(i + 1);
    }
}
signed main()
{
    fastio;
    cin >> n >> m;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        st.insert(t);
    }
    for (auto x : st)
        a.push_back(x);
    Try(1);
    return 0;
}