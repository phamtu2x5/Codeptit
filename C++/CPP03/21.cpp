#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t;

bool cmp(string a, string b) {
    if (a.size() > b.size()) return true;
    if (a.size() < b.size()) return false;
    return a >= b;
}

void sub(string a, string b) {
    string res = "";
    int carry = 0;
    int n1 = a.size(), n2 = b.size();

    // Ensure b is the smaller or equal size
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < n2; i++) {
        int diff = (a[i] - '0') - (b[i] - '0') - carry;
        if (diff < 0) {
            diff += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        res.push_back(diff + '0');
    }

    for (int i = n2; i < n1; i++) {
        int diff = (a[i] - '0') - carry;
        if (diff < 0) {
            diff += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        res.push_back(diff + '0');
    }

    reverse(res.begin(), res.end());

    cout << res << "\n";
}

signed main() {
    fastio
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        if (cmp(a, b))
            sub(a, b);
        else
            sub(b, a);
    }
    return 0;
}
