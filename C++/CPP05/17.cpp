#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct NhanVien
{
    string mvn,name,sec,dob,address,tax,date;
};
int stt=0;
void nhap(NhanVien &a){
    a.mvn=to_string(++stt);
    while(a.mvn.size()<5)
        a.mvn="0"+a.mvn;
    cin.ignore();
    getline(cin,a.name);
    cin>>a.sec>>a.dob;
    cin.ignore();
    getline(cin,a.address);
    cin>>a.tax>>a.date;
}
void in(NhanVien a){
    cout << a.mvn << ' ' << a.name << ' ' << a.sec << ' ' << a.dob << ' ' << a.address << ' ' << a.tax << ' ' << a.date << '\n';
}
void inds(NhanVien ds[],int N){
    for(int i=0;i<N;i++)
        in(ds[i]);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}