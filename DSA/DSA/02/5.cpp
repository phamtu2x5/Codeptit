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
    while (t--)
    {
        string s;
        cin >> s;
        do
        {
            cout << s << ' ';
        } while (next_permutation(s.begin(), s.end()));
        cout << '\n';
    }
    return 0;
}