#include <bits/stdc++.h>
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

struct ThiSinh{
    string name;
    string dob;
    double sum;
};
void nhap(ThiSinh &A){
    getline(cin,A.name);
    cin>>A.dob;
    double x,y,z;
    cin>>x>>y>>z;
    A.sum=x+y+z;
}
void in(ThiSinh A){
    cout<<A.name<<" "<<A.dob<<" "<<setprecision(1)<<fixed<<A.sum;
}
int main() {
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}