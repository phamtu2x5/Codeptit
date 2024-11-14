#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

int t, n;
class SinhVien
{
private:
  static int msv;
  string name, id;
  double gpa;

public:
  SinhVien();
  SinhVien(string, double);
  void in();
  void out();
};
SinhVien::SinhVien() {};
SinhVien::SinhVien(string name, double gpa)
{
  this->name = name;
  this->gpa = gpa;
}
int SinhVien::msv = 0;
void SinhVien::in()
{
  ++msv;
  this->id = "SV" + string(3 - to_string(msv).size(), '0') + to_string(msv);
  cin >> this->name >> this->gpa;
}
void SinhVien::out()
{
  cout << this->name << " " << this->id << " " << this->gpa << "\n";
}
signed
main()
{
  SinhVien x;
  x.in();
  x.out();
  return 0;
}