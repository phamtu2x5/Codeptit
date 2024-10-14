#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
    if(!b)  return a;
    return gcd(b,a%b);
}
struct PhanSo
{
    ll tu,mau;
    void rutgon(){
        ll m=gcd(tu,mau);
        tu/=m;
        mau/=m;
    }
};
void nhap(PhanSo &a){
    cin>>a.tu>>a.mau;
}
void in(PhanSo a){
    cout<<a.tu<<"/"<<a.mau;
}
PhanSo tong(PhanSo p,PhanSo q){
    PhanSo t;
    t.tu=p.tu*q.mau+p.mau*q.tu;
    t.mau=p.mau*q.mau;
    t.rutgon();
    return t;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}