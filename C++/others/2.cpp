#include <bits/stdc++.h>
#define int long long
#define N 10005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
// int id = 0;
class SinhVien
{

public:
    string stt = "SV", msv, name, fullName, ns, lop;
    int a[3];
    double gpa;
    void cvName()
    {
        stringstream ss(name);
        string str;
        while (ss >> str)
        {
            str[0] = toupper(str[0]);
            for (int i = 1; i < str.size(); i++)
                str[i] = tolower(str[i]);
            fullName += str + " ";
        }
    }
    void cvNs()
    {
        int i = 0;
        while (isdigit(ns[i]))
            i++;
        a[0] = stoll(ns.substr(0, i));
        if (i == 1)
            ns.insert(0, "0");
        i++;
        int j = i;
        while (isdigit(ns[j]))
            j++;
        a[1] = stoll(ns.substr(i, j - i));
        if (j - i == 1)
            ns.insert(i, "0");
        j++;
        a[2] = stoll(ns.substr(j, 4));
    }
    void input()
    {
        // ++id;
        // string idd = to_string(id);
        // while (idd.size() < 4)
        //     idd = "0" + idd;
        // msv += idd;
        cin.ignore();
        getline(cin, msv);
        getline(cin, name);
        cvName();
        getline(cin, ns);
        cvNs();
        getline(cin, lop);
        cin >> gpa;
    }
    void out()
    {
        cout << msv << " " << fullName << ns << " " << lop << " " << gpa << " " << a[0] << " " << a[1] << " " << a[2] << "\n";
    }
};
SinhVien sv[N];
signed main()
{
    fastio;
    int t, m, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        sv[i].input();
    for (int i = ; i < n; i++)
    {
        sv[i].out();
    }

    return 0;
}