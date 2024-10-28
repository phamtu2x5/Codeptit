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

signed main(){
    fastio
    int n,q;
    string s;
    cin>>n;
    SV a[n+5];
    for(int i=1;i<=n;i++)
        a[i].input();
    cin>>q;
    cin.ignore();
    while(q--){
        getline(cin,s);
        string ans="", res="DC";
        stringstream ss(s);
        string str;
        while(ss>>str){
            for(auto &x:str)
                x=toupper(x);
            if(res.size()<4)
            res+=str[0];
            ans+=str+" ";
        }       
        ans.pop_back();
        cout<<"DANH SACH SINH VIEN NGANH "<<ans<<":\n";
        for(int i=1;i<=n;i++)
            if(a[i].msv.substr(3,4)==res){
                if(res=="DCCN" || res=="DCAT"){
                    if(a[i].clas[0]!='E')
                        a[i].output();
                }
                else a[i].output();
            }
    }
    return 0;
}