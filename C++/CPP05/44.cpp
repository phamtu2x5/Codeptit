#include <bits/stdc++.h>
#define int long long
#define PI 3.141592653589793238
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

struct point{
    double x,y;
    void inp(){
        cin>>x>>y;
    }
};
double distance(point A,point B){
    return sqrt( (A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y) );
}
int ok(double a,double b,double c){
    return (a+b>c && a+c>b && b+c>a);
}
void solve(double a,double b,double c){
    if(!ok(a,b,c)){
        cout<<"INVALID\n";
    }
    else{
        double s=sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4.0;
        double r=a*b*c/(4*s);
        cout<<setprecision(3)<<fixed<<PI*r*r<<"\n";
    }
}
signed main() {
    fastio
    int t;
    cin>>t;
    while(t--){
        point A,B,C;
        A.inp();B.inp();C.inp();
        double a=distance(B,C),b=distance(A,C),c=distance(A,B);
        solve(a,b,c);
    }
    return 0;
}