#include <bits/stdc++.h>
#define ll long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll gcd(ll a,ll b){
    if(!b)  return a;
    return gcd(b,a%b);
}
class PhanSo
{
private:
    /* hmm */
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
    friend PhanSo operator+(const PhanSo &a,const PhanSo &b){
        PhanSo c(1,1);
        c.tu=a.tu*b.mau+a.mau*b.tu;
        c.mau=a.mau*b.mau;
        c.rutgon();
        return c;
    }
};


int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}