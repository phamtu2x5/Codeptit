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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int left = 0, right = n - 1;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {  
                cout << v[right] << " "; // In phần tử lớn nhất còn lại
                right--;
            } else {  
                cout << v[left] << " ";  // In phần tử nhỏ nhất còn lại
                left++;
            }
        }
        cout << '\n';
    }
    return 0;
}
