#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
class dt
{
public:
    int l, r;
};
int cmp(dt a, dt b)
{
    return a.r < b.r;
}
signed main()
{
    fastio;
    int n;
    cin >> n;
    dt a[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> a[i].l >> a[i].r;
    sort(a + 1, a + n + 1, cmp);
    int tmp = a[1].r, ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i].l >= tmp)
        {
            ans++;
            tmp = a[i].r;
        }
    }
    cout << n - ans;
    return 0;
}