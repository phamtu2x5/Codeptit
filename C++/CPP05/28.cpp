#include <bits/stdc++.h>
#define ll long long
using namespace std;

int id = 1;

struct SinhVien{
    string ten, msv, lop, mail, dn;
    int stt;
    void nhap(){
        cin >> msv;
        cin.ignore();
        getline(cin, ten);
        cin >> lop >> mail >> dn;
        stt = id++;
    }
    void in(){
        cout << stt << ' ' << msv << ' ' << ten << ' ' << lop << ' ' << mail << ' ' << dn << '\n';
    }
};

int cmp(SinhVien a, SinhVien b){
    return a.ten < b.ten;
}
int main() {
    int n,q;
    cin>>n;
    map<string,vector<SinhVien>>mp;
    for(int i=1;i<=n;i++){
        SinhVien x;
        x.nhap();
        mp[x.dn].push_back(x);
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        string s;
        cin>>s;
        sort(mp[s].begin(),mp[s].end(),cmp);
        for(auto x:mp[s])
            x.in();
    }
    return 0;
}