#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int ktscp(int n){
	int k=sqrt(n);
	if(k*k==n){
		return 1;
	}
	return 0;
}
int ktu(int n){
	for(int i=2;i<sqrt(n);i++){
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
		for(int i=2;i<=n;i++){
			if(ktscp(i)==1){
				if(ktu(i)==1){
					cout<<i<<" ";
				}
			}
		}
		cout<<endl;
	}
}