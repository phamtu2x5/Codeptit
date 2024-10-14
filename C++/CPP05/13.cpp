#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int cnt=0;
struct SinhVien
{
    string msv,name,clas,dob;
    double gpa;
    void convert(){
        int s1=0;
        while(dob[s1]!='/')
            s1++;
        int s2=s1+1;
        while(dob[s2]!='/')
            s2++;
        if(s1==1){
            dob.insert(0,"0");
        }
        if(s2-s1==2){
            dob.insert(s1+2,"0");
        }
    }
    
};
void inp(SinhVien &a){
        cin.ignore();
        getline(cin,a.name);
        cin>>a.clas>>a.dob>>a.gpa;
        a.convert();
        string num=to_string(++cnt);
        while(num.size()<3)
            num="0"+num;
        a.msv="B20DCCN"+num;
}
void out(SinhVien a){
        cout<<a.msv<<" "<<a.name<<" "<<a.clas<<" "<<a.dob<<" "
            <<setprecision(2)<<fixed<<a.gpa<<"\n";
}
void nhap(SinhVien ds[],int N){
    for(int i=1;i<=N;i++)
        inp(ds[i]);
}
void in(SinhVien ds[],int N){
    for(int i=1;i<=N;i++)
        out(ds[i]);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}