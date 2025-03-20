#include <bits/stdc++.h>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int m, n, a[100];
char ch;

void Try(int i)
{
    for (int j = (i == 0 ? 0 : a[i - 1]); j <= n; j++)
    {
        a[i] = j;
        if (i == m - 1)
        {
            for (int t = 0; t < m; t++)
                cout << char('A' + a[t]);
            cout << '\n';
        }
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
    fastio;
    cin >> ch >> m;
    n = ch - 'A';
    Try(0);
    return 0;
}
