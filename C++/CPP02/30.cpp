#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t,n;
signed main() {
    fastio
    int n;  
    cin >> n;
    int a[n][4];
    int res = 0;
    for(int i=0; i<n; ++i){
      int cnt1 = 0, cnt0 = 0;
      for(int j=0; j<3; ++j){
        cin >> a[i][j];
        cnt1 += a[i][j];
        cnt0 += !a[i][j];
      }
      res += (cnt1 > cnt0);
    }
    cout << res;
    return 0;
}