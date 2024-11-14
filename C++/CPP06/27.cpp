#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                  \
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
  string fullName, field, cvField, mgv = "GV";
  void convert()
  {
    string other = fullName;
    stringstream ss(other);
    string str1;
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
signed main()
{
  fastio int n, q;
  cin >> n;
  cin.ignore();
  GV a[n + 5];
  for (int i = 1; i <= n; i++)
  {
    a[i].input();
  }
  cin >> q;
  cin.ignore();
  while (q--)
  {
    string s;
    cin >> s;
    cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
    for (auto &x : s)
    {
      x = tolower(x);
    }
    int len = s.size();
    for (int i = 1; i <= n; i++)
    {
      string name = a[i].fullName;
      for (int j = 0; j <= name.size() - len; j++)
      {
        string tmp = name.substr(j, len);
        for (auto &x : tmp)
          x = tolower(x);
        if (tmp == s)
        {
          a[i].output();
          break;
        }
      }
    }
  }
  return 0;
}