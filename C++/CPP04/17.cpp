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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int le = 1, ri = n;
        while (le < n && a[le] <= a[le + 1])
            le++;
        if (le == n) {
            cout << "1 " << n << "\n";
            continue;
        }
        while (ri > 1 && a[ri] >= a[ri - 1])
            ri--;
        int min_val = *min_element(a.begin() + le, a.begin() + ri + 1);
        int max_val = *max_element(a.begin() + le, a.begin() + ri + 1);
        while (le > 1 && a[le - 1] > min_val)
            le--;
        while (ri < n && a[ri + 1] < max_val)
            ri++;
        
        cout << le << " " << ri << "\n";
    }
    return 0;
}
