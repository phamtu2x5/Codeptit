// #include <bits/stdc++.h>
// #define int long long
// #define fastio                    \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;

// signed main()
// {
//     fastio;
//     int t, b, p;
//     cin >> t;
//     while (t--)
//     {
//         int ans = 0;
//         cin >> b >> p;

//         for (int i = 1; i < p; i++)
//         {
//             if (i * i % p == 1)
//             {
//                 int x = i + p * (b / p);
//                 if (x > b)
//                     x -= p;
//                 ans += (x - i) / p + 1;
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

signed main()
{
    fastio;
    int t, m, n;
    cin >> m;
    for (int i = 1; i < m; i++)
        if (i * i % m == 1)
            cout << i << "\n";
    return 0;
}