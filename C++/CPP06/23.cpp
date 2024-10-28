#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
class SV
{
public:
    string msv, name, clas, mail;
    void input(){
        cin>>msv;
        cin.ignore();
        getline(cin,name);
        cin>>clas>>mail;
    }
    void output(){
        cout<<msv<<" "<<name<<" "<<clas<<" "<<mail<<"\n";
    }
};

signed main() {
    fastio
    int n,q;
    string s;
    cin>>n;
    SV a[n+5];
    for(int i=1;i<=n;i++)
        a[i].input();
    cin>>q;
    while(q--){
        cin>>s;
        cout<<"DANH SACH SINH VIEN KHOA "<<s<<":\n";
        for(int i=1;i<=n;i++)
            if(a[i].clas.substr(1,2)==s.substr(2,2)){
                a[i].output();
            }
    }
    return 0;
}