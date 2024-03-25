#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t;
ll a,m;
ll gcd(ll x,ll y){
	if(y==0) return x;
	return gcd(y,x%y);
}
ll phi_ham_euler(ll n){
	ll ans=n;
	set<ll> st;
	for(ll i=2;i*i<=n;i++)
		if(n%i==0)
		{
			st.insert(i);
			while(n%i==0)
				n/=i;
		}
	if(n!=1) st.insert(n);
	for(auto x:st)
		ans=ans/x*(x-1);
	return ans;
}
int main() {
	cin>>t;
	while(t--){
		cin>>a>>m;
		ll tmp=m/gcd(a,m);
		cout<<phi_ham_euler(tmp)<<"\n";
	}
	return 0;
}