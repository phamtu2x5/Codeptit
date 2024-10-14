#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string MSV="B20DCCN001";
    string clas;
    string name;
    string dob;
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
void nhap(SinhVien &a){
    getline(cin,a.name);
    cin>>a.clas;
    cin>>a.dob;
    cin>>a.gpa;
    a.convert();
}
void in(SinhVien a){
    cout<<a.MSV<<" "<<a.name<<" "<<a.clas<<" "<<a.dob<<" "<<setprecision(2)<<fixed<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
