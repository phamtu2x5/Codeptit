#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int ktsnt(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<n;i++){
			if(ktsnt(i)==1&&ktsnt(n-i)==1){
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
	}
}