#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    ifstream inp;
    inp.open("PTIT.in", ios::in);
    ofstream out;
    out.open("PTIT.out", ios::out);
    string s;
    while(getline(inp,s))
        out<<s<<"\n";
    return 0;
}