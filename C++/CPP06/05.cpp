#include <bits/stdc++.h>
#define N 1000005
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

ll gcd(ll a,ll b){
    if(!b)  return a;
    return gcd(b,a%b);
}
class PhanSo
{
private:
    /* Lanthy */
public:
    ll tu,mau;
    PhanSo(ll newTu,ll newMau){
        tu=newTu;
        mau=newMau;
    }
    void rutgon(){
        ll uc = gcd(tu, mau);
        tu/=uc;
        mau/=uc;
    }
    friend istream& operator>>(istream& inp,PhanSo &p){
        inp>>p.tu>>p.mau;
        return inp;
    }
    friend ostream& operator<<(ostream& out,const PhanSo &p){
        out<<p.tu<<"/"<<p.mau;
        return out;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}