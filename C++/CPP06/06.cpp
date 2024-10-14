#include <bits/stdc++.h>
using namespace std;

class NhanVien {
private:
    string name, gender, date, address, tax, work, empcode;
    static int dem;
public:
    friend istream& operator>>(istream& in, NhanVien &a);
    friend ostream& operator>>(ostream& out, const NhanVien &a);
};

int NhanVien::dem = 1;

istream& operator>>(istream& in, NhanVien &a) {
    a.empcode = "0000" + to_string(a.dem);
    a.dem++;  
    
    getline(in, a.name);
    getline(in, a.gender);
    getline(in, a.date);
    getline(in, a.address);
    getline(in, a.tax);
    getline(in, a.work);
    
    return in;
}

ostream& operator>>(ostream& out, const NhanVien &a) {
    out << a.empcode << ' ' << a.name << ' ' << a.gender << ' ' << a.date << ' '
        << a.address << ' ' << a.tax << ' ' << a.work;
    return out;
}

int main() {
    NhanVien a;
    cin >> a;  
    cout >> a; 
    return 0;
}
