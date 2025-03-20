#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n, cnt;
vector<int> col(100), d1(100), d2(100);
void Try(int i)
{
    for (int j = 1; j <= n; j++)
        if (!col[j] && !d1[i + j - 1] && !d2[i - j + n])
        {
            col[j] = d1[i + j - 1] = 1;
            d2[i - j + n] = 1;
            if (i == n)
                cnt++;
            else
                Try(i + 1);
            col[j] = d1[i + j - 1] = d2[i - j + n] = 0;
        }
}
signed main()
{
    fastio;
    cin >> t;
    while (t--)
    {
        fill(col.begin(), col.end(), 0);
        fill(d1.begin(), d1.end(), 0);
        fill(d2.begin(), d2.end(), 0);
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt << '\n';
    }
    return 0;
}