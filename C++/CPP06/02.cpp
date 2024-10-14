#include <bits/stdc++.h>
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

class SinhVien
{
private:
    /* de nhat quoc su Tran Dan */
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
    friend istream& operator>>(istream& inp,SinhVien &a){
        getline(inp,a.name);
        inp>>a.lop>>a.dob>>a.gpa;
        a.convert();
        return inp;
    }
    friend ostream& operator<<(ostream& out,const SinhVien &a){
        out<<a.MSV<<" "<<a.name<<" "<<a.lop<<" "<<a.dob<<" "<<setprecision(2)<<fixed<<a.gpa;
        return out;
    }
};


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}