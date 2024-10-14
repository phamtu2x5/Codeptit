#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define maxn 100005

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    int n, x;
    cin >> n >> x;
    int a[n];
    int res;
    for(int i=0; i<n; ++i){
      cin >> a[i];
      if(a[i] == x) res = i+1;
    }
    cout << res << '\n';
  }
}