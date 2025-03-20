#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, m, n;
char ch, x = 'A';
string s;
signed main()
{
    fastio;
    cin >> ch;
    while (x != ch)
    {
        s.push_back(x);
        x++;
    }
    s.push_back(ch);
    do
    {
        bool ok = true;
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == 'A' || s[i] == 'E')
            {
                if (s[i - 1] != 'A' && s[i - 1] != 'E' && s[i + 1] != 'A' && s[i + 1] != 'E')
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
            cout << s << '\n';
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}