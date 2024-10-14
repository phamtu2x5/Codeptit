#include <bits/stdc++.h>
#define int long long
#define N 1000005
using namespace std;
int n,s;
int kt(int x){
	int c=0,l=0;
	while(x>0){
		if((x%10)%2==1) l++;
		else c++;
		x/=10;
	}
	return c==l;
}
signed main() {
    cin>>n;
    int st=pow(10,n-1),en=pow(10,n)-1;
    for(int i=st;i<=en;i++){
    	if(kt(i))
    	{
    		s++;
    		cout<<i<<" ";
    		if(s==10){
    			cout<<"\n";
    			s=0;
    		}
    	}
    }
    return 0;
}