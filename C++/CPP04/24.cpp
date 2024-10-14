#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define maxn 100005

int main(){
  faster()
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    int a[n*k];
    for(int &x : a) cin >> x;
    sort(a, a+n*k);
    for(int x : a) cout << x << ' ';
    cout << '\n';
  }
}