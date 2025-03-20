#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int a[100], n;

bool check()
{
    int l = 1, r = n;
    while (l < r)
    {
        if (a[l] != a[r])
            return false;
        l++;
        r--;
    }
    return true;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            if (check())
            {
                for (int t = 1; t <= n; t++)
                    cout << a[t] << " ";
                cout << "\n";
            }
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