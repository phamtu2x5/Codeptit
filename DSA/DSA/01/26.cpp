#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int n, a[100];
bool kt()
{
    if (a[1] != 1 || a[n] != 0)
        return false;
    int cnt6 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            if (a[i - 1] == 1)
                return false;
            cnt6 = 0;
        }
        else
        {
            cnt6++;
            if (cnt6 > 3)
                return false;
        }
    }
    return true;
}
void in()
{
    for (int i = 1; i <= n; i++)
        cout << ((a[i] == 1) ? 8 : 6);
    cout << '\n';
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            if (kt())
                in();
        }
        else
            Try(i + 1);
    }
}
signed main()
{
    fastio;
    cin >> n;
    Try(1);

    return 0;
}