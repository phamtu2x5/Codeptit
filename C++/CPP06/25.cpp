#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int index=0;
class GV
{
private:
    /* data */
public:
    int intmgv;
    string fullName, name, field, cvField, mgv="GV0";
    void convert(){
        string other=fullName;
        stringstream ss(other);
        string str1;
        while(ss>>str1){
            name=str1;
        }
        stringstream sss(field);
        string str2;
        while(sss>>str2){
            cvField+=toupper(str2[0]);
        }
    }
    void intput(){
        intmgv=++index;
        mgv+=to_string(intmgv);
        getline(cin,fullName);
        getline(cin,field);
        convert();
    }
    void output(){
        
    }
};

signed main() {
    fastio
    int n;
    GV a[n+5];
    for(int i=1;i<=n;i++)
    return 0;
}