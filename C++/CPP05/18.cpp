#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int cnt = 0;

struct NhanVien {
    string mvn;
    string name;
    string sex;
    string dob;
    string address;
    string tax;
    string date;

    void convertdob() {
        int s1 = dob.find('/');
        int s2 = dob.find('/', s1 + 1);
        if (s1 == 1) {
            dob.insert(0, "0");
        }
        if (s2 - s1 == 1) {
            dob.insert(s1 + 3, "0");
        }
    }
};

void nhap(NhanVien &a) {
    cin.ignore(); 
    getline(cin, a.name);
    cin >> a.sex >> a.dob;
    cin.ignore(); 
    getline(cin, a.address);
    cin >> a.tax >> a.date;
    string num = to_string(++cnt);
    while (num.size() < 5) {
        num = "0" + num;
    }
    a.mvn = num;
    a.convertdob();
}

void in(NhanVien a) {
    cout << a.mvn << " " << a.name << " " << a.sex << " " << a.dob << " "
         << a.address << " " << a.tax << " " << a.date << "\n";
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        in(ds[i]);
    }
}

bool cmp(NhanVien a, NhanVien b) {

    int m1 = stoi(a.dob.substr(0, 2));
    int d1 = stoi(a.dob.substr(3, 2));
    int y1 = stoi(a.dob.substr(6, 4));
    int m2 = stoi(b.dob.substr(0, 2));
    int d2 = stoi(b.dob.substr(3, 2));
    int y2 = stoi(b.dob.substr(6, 4));


    if (y1 != y2) return y1 < y2;
    if (m1 != m2) return m1 < m2;
    return d1 < d2;
}

void sapxep(NhanVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main() {
    struct NhanVien ds[50];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        nhap(ds[i]);
    }
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
