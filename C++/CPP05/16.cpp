#include <bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int res=0;
struct Product
{
    int cnt;
    string name;
    string type;
    double benefit;
};
void inp(Product &a){
    double x,y;
    a.cnt=++res;
    cin.ignore();
    getline(cin,a.name);
    getline(cin,a.type);
    cin>>x>>y;
    a.benefit=y-x;
}
void out(Product a){
    cout<<a.cnt<<" "<<a.name<<" "<<a.type<<" "
        <<setprecision(2)<<fixed<<a.benefit<<'\n';
}
int cmp(Product a,Product b){
    return a.benefit>=b.benefit;
}
void nhap(Product ds[],int N){
    for(int i=0;i<N;i++)
        inp(ds[i]);
    sort(ds,ds+N,cmp);
}
void in(Product ds[],int N){
    for(int i=0;i<N;i++)
        out(ds[i]);
}

signed main() {
    fastio
    int N;
    cin>>N;
    Product ds[N+5];
    nhap(ds,N);
    in(ds,N);
    return 0;
}