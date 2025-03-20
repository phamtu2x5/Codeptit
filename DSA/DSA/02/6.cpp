#include <bits/stdc++.h>
using namespace std;

void sinh(int a[], int n)
{
    int i = n - 1;
    while (a[i] == 0)
    {
        a[i] = 1;
        i--;
    }
    if (i >= 0)
        a[i] = 0;
}

void in(int a[], int b[], int n, int k, int &ok)
{
    int sum = 0;
    string s = "";
    for (int i = 0; i < n; i++)
        if (b[i] == 1)
            sum += a[i];

    if (sum == k)
    {
        s += "[";
        for (int i = 0; i < n; i++)
            if (b[i] == 1)
                s += to_string(a[i]) + " ";
        s.pop_back();
        s += "] ";
        cout << s;
        ok = 1;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, ok = 0;
        cin >> n >> k;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 1;
        }

        sort(a, a + n);
        int x = 1 << n;

        while (x--)
        {
            in(a, b, n, k, ok);
            sinh(b, n);
        }

        if (ok == 0)
            cout << -1;
        cout << "\n";
    }
}
