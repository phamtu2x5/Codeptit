#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n, a[10];
void in()
{
    for (int i = 1; i <= 8; i++)
        if (i == 2 || i == 4)
            cout << a[i] << '/';
        else
            cout << a[i];
    cout << '\n';
}
void Try(int i)
{
    for (int j = 0; j <= 2; j++)
    {
        if (j != 1)
        {
            a[i] = j;
            if (i == 8)
            {
                if ((a[1] + a[2] != 0) && a[3] != 2 && a[4] != 0 && a[5] != 0)
                    in();
            }
            else
                Try(i + 1);
        }
    }
}
signed main()
{
    fastio;
    Try(1);
    return 0;
}