#include <bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n;

signed main() {
    fastio
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) {
            cin >> x;
            x *= x;  
        }
        
        sort(a.begin(), a.end());  
        
        bool found = false;
        
        for (int k = n - 1; k >= 2 && !found; --k) {
            int i = 0, j = k - 1;
            while (i < j) {
                if (a[i] + a[j] == a[k]) {
                    found = true;
                    break;
                } else if (a[i] + a[j] < a[k]) {
                    ++i;
                } else {
                    --j;
                }
            }
        }
        
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
