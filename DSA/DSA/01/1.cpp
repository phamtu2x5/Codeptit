#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int t, m, n;
signed main()
{
    fastio;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int l = s.size() - 1;
        while (l >= 0 && s[l] == '1')
        {
            s[l] = '0';
            l--;
        }
        if (l >= 0)
            s[l] = '1';
        cout << s << "\n";
    }

    return 0;
}