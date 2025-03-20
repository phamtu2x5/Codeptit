#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t;
int mod(string a, int b)
{
    int reminder = 0;
    for (auto x : a)
    {
        int num = x - '0';
        reminder = (reminder * 10 + num) % b;
    }
    return reminder;
}
int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}
signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        int a, b;
        string bb;
        cin >> a >> bb;
        if (bb.size() >= 17)
            b = mod(bb, a);
        else
            b = stoll(bb);
        cout << gcd(a, b) << "\n";
    }

    return 0;
}