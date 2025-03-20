#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int c5(string s)
{
    int n = 0;
    for (auto x : s)
    {
        if (x == '6')
            x = '5';
        n = n * 10 + (x - '0');
    }
    return n;
}

int c6(string s)
{
    int n = 0;
    for (auto x : s)
    {
        if (x == '5')
            x = '6';
        n = n * 10 + (x - '0');
    }
    return n;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << c5(a) + c5(b) << " " << c6(a) + c6(b);
}
