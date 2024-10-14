#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    if(!b)  return a;
    return gcd(b,a%b);
}
struct PhanSo{
    ll tu,mau;
};
void nhap(PhanSo &p){
    cin>>p.tu>>p.mau;
}
void rutgon(PhanSo &p){
    ll m=gcd(p.mau,p.tu);
    p.tu/=m;
    p.mau/=m;
}
void in(PhanSo p){
    cout<<p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}