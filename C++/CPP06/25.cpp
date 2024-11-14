#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int ind = 0;
class GV
{
private:
    /* data */
public:
    int intmgv;
    string fullName, name, field, cvField, mgv = "GV";
    void convert()
    {
        string other = fullName;
        stringstream ss(other);
        string str1;
        while (ss >> str1)
        {
            name = str1;
        }
        stringstream sss(field);
        string str2;
        while (sss >> str2)
        {
            cvField += toupper(str2[0]);
        }
    }
    void input()
    {
        intmgv = ++ind;
        if (intmgv < 10)
            mgv += "0";
        mgv += to_string(intmgv);
        getline(cin, fullName);
        getline(cin, field);
        convert();
    }
    void output()
    {
        cout << mgv << " " << fullName << " " << cvField << " " << "\n";
    }
};
int cmp(GV p, GV q)
{
    if (p.name == q.name)
    {
        return p.intmgv < q.intmgv;
    }
    return p.name < q.name;
}
signed main()
{
    fastio int n;
    cin >> n;
    cin.ignore();
    GV a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        a[i].input();
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        a[i].output();
    }

    return 0;
}