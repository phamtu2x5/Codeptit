#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

int t, n;
class DN
{
public:
  string code, name;
  int cnt = 0;
  void input()
  {
    cin >> code;
    cin.ignore();
    getline(cin, name);
    cin >> cnt;
  }
  void output()
  {
    cout << code << " " << name << " " << cnt << "\n";
  }
};
int cmp(DN a, DN b)
{
  if (a.cnt == b.cnt)
  {
    return a.code < b.code;
  }
  else
    return a.cnt > b.cnt;
}

signed main()
{
  fastio
          cin >>
      n;
  vector<DN> a(n);
  for (auto &x : a)
  {
    x.input();
  }
  sort(a.begin(), a.end(), cmp);
  for (auto x : a)
    x.output();
  return 0;
}