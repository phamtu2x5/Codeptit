#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, n;
signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        string s1, s2;
        string ans;
        cin >> s1 >> s2;
        s1 = ' ' + s1;
        s2 = ' ' + s2;
        vector<vector<int>> a(105, vector<int>(27, 0));
        vector<int> b(27, 0);
        for (int i = 1; i < s1.size(); i++)
        {
            a[i][s1[i] - 'a'] = 1;
            for (int j = 0; j <= 25; j++)
            {
                a[i][j] += a[i - 1][j];
            }
        }
        for (auto x : s2)
            b[x - 'a']++;
        for (int i = 1; i < s1.size(); i++)
        {
            for (int j = i; j < s1.size(); j++)
            {
                int kt = 1;
                for (int z = 0; z <= 25; z++)
                {
                    if (b[z] > a[j][z] - a[i - 1][z])
                    {
                        kt = 0;
                        break;
                    }
                }
                if (kt)
                {
                    if (ans == "")
                        ans = s1.substr(i, j - i + 1);
                    else
                    {
                        if (ans.size() > j - i + 1)
                            ans = s1.substr(i, j - i + 1);
                    }
                }
            }
        }
        ans == "" ? cout << "-1\n" : cout << ans << "\n";
    }

    return 0;
}