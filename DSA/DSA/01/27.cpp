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
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    do
    {
        for (auto x : a)
            cout << x << ' ';
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}