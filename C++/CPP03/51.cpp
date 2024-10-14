#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n;

signed main() {
    fastio
    cin >> t;
    while (t--) {
        int type;
        cin >> type;
        cin.ignore(); 
        string s;
        getline(cin, s);
        vector<string> ans;
        stringstream ss(s);
        string str;
        while (ss >> str) {
            str[0] = toupper(str[0]);
            for (int i = 1; i < str.size(); i++)
                str[i] = tolower(str[i]);
            ans.push_back(str);
        }
        if (type == 1) {
                ans.insert(ans.begin(), *ans.rbegin());
                ans.pop_back();
            } else {
                ans.push_back(*ans.begin());
                ans.erase(ans.begin());
            }
        for (auto x : ans)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
