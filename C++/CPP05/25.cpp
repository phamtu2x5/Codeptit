#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string msv;
    string name;
    string lop;
    double d1, d2, d3;
};


void nhap(SinhVien &a) {
    cin.ignore(); 
    getline(cin, a.msv);
    getline(cin, a.name);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2 >> a.d3;
}


bool cmp(const SinhVien &a, const SinhVien &b) {
    return a.name < b.name;
}


void sap_xep(SinhVien a[], int n) {
    sort(a, a + n, cmp);
}


void in_ds(const SinhVien a[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " "; 
        cout << a[i].msv << " " << a[i].name << " " << a[i].lop << " ";
        cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    SinhVien *ds = new SinhVien[n]; 
    for (int i = 0; i < n; ++i) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}