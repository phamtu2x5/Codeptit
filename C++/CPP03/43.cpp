#include <bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t;
signed main() {
    fastio
    cin >> t; 
    cin.ignore(); 
    
    while(t--){
        string line;
        getline(cin, line);
        stringstream ss(line); 
        
        int n = 0, odd = 0, even = 0;
        int x;
        while (ss >> x) {
            n++;
            if (x % 2 == 0) even++; 
            else odd++; 
        }
        if (n % 2 == 0) {
            if (even > odd)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            if (odd > even)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    
    return 0;
}