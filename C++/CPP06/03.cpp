#include <bits/stdc++.h>
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

class SinhVien
{
private:
    /* chu ngoc quang vinh */
public:
    string MSV="B20DCCN001";
    string name;
    string date;
    string clas;
    double gpa;
    
    void convertDate(){
        int i=0;
        while(date[i]!='/')
            i++;
        if(i==1){
            date.insert(0,"0");
            i++;
        }
        int j=i+1;
        while(date[j]!='/')
            j++;
        if(j-i==2)
            date.insert(i+1,"0");
    }
    
    void convertName(){
        string res="";
        stringstream ss(name);
        string str;
        while(ss>>str){
            for(auto&x:str)
                x=tolower(x);
            str[0]=toupper(str[0]);
            res+=" "+str;
        }
        name=res;
    }
    
    friend istream& operator>>(istream& inp,SinhVien &a){
        getline(inp,a.name);
        inp>>a.clas>>a.date>>a.gpa;
        a.convertName();
        a.convertDate();
        return inp;
    }
    friend ostream& operator<<(ostream& out,const SinhVien &a){
        out<<a.MSV<<" "<<a.name<<" "<<a.clas<<" "<<a.date<<" "<<setprecision(2)<<fixed<<a.gpa;
        return out;
    }
    
};


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}