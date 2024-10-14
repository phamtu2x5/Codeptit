#include <bits/stdc++.h>
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

class SinhVien
{
private:
    /* aloalo1234alo */
public:
    string MSV="B20DCCN001";
    string name;
    string dob;
    string lop;
    double gpa;
    void convert(){
        int i=0;
        while(dob[i]!='/')
            i++;
        if(i==1){
            dob.insert(0,"0");
            i++;
        }
        int j=i+1;
        while(dob[j]!='/')
            j++;
        if(j-i==2)
            dob.insert(i+1,"0");
    }
    void nhap(){
        getline(cin,name);
        cin>>lop;
        cin>>dob;
        cin>>gpa;
        convert();
    }
    void xuat(){
        cout<<MSV<<" "<<name<<" "<<lop<<" "<<dob<<" "<<setprecision(2)<<fixed<<gpa;
    }

};




int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}