#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int t,res,n;
char x;
char a[]={' ','A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char b[]={' ','A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
void cnt(char s[]){
	for(int i=1;i<=15;i++)
		{
			cin>>x;
			if(x==s[i])
				res++;
		}
	cout<<setprecision(2)<<fixed<<10*res/15.0<<"\n";
}
signed main() {
    cin>>t;
    while(t--){
    res=0;
    cin>>n;
    if(n==101)
    	cnt(a);
    else cnt(b);
    }
    return 0;
}