#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t;
string s;
void convert(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (i <= s.size() - 3 && s.substr(i, 3) == "084") {
            i += 2;  
        } else {
            result += s[i];  
        }
    }
    cout << result << "\n";
}

signed main() {
    cin>>t;
    while(t--){
    	cin>>s;
    	convert(s);
    }
    return 0;
}