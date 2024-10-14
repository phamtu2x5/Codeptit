 #include <bits/stdc++.h>
 #define int long long
 #define N 1000005
 #define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 using namespace std;
 
 int t,n,f[95];
 void init(){
    f[1]=1;
    for(int i=2;i<=92;i++)
        f[i]=f[i-1]+f[i-2];
 }
 signed main() {
     fastio
     init();
     cin>>t;
     while(t--){
        cin>>n;
        int ok=binary_search(f,f+93,n);
        ok?cout<<"YES\n":cout<<"NO\n";
     }
 return 0;
 }