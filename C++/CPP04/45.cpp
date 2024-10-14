#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define maxn 100005

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n);
    for(int i=1; i<n; ++i){
      if(a[i] != a[0]){
        cout << a[0] << ' ' << a[i] << '\n';
        return;
      }
    }
    cout << -1 << '\n';
}

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}