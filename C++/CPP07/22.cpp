#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string times(string a,int b){
    if(a=="0" || b==0)
        return "0";
    int n=a.size();
    string c(n,'0');
    int reminder=0;
    for(int i=n-1;i>=0;i--){
        reminder+=(a[i]-'0')*b;
        c[i]=reminder%10+'0';
        reminder/=10;
    }
    if(reminder>0)
        c=to_string(reminder)+c;
    return c;
}

int main() {
    fastio
    int n;
    cin>>n;
    ++n;
    vector<int>a;
    for(int i=n+2;i<=2*n;i++)
        a.push_back(i);
    for(int i=2;i<=n;i++){
        int x=i;
        for(int j=0;j<a.size()&&x>1;j++){
            int d=__gcd(x,a[j]);
            x/=d;
            a[j]/=d;
        }
    }
    string res="1";
    for(int x:a){
        if(x>1)
            res=times(res,x);
    }
    cout<<res;
    return 0;
}