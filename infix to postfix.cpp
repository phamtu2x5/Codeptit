#include <bits/stdc++.h>
using namespace std;
int t,ans;
string s;
int priority(char c){
	if(c=='+' || c=='-')
		return 1;
	if(c=='*' || c=='/')
		return 2;
	return 0;
}
void process(string x,stack<long long>& res){
	if(x!="+" && x!="-" && x!="*")
		{
			long long  y=stoll(x);
			res.push(y);
		}
	else{
		long long r=res.top(); res.pop();
		long long l=res.top(); res.pop();
	switch(x[0]){
		case '+': res.push(l+r); break;
		case '-': res.push(l-r); break;
		case '*': res.push(l*r); break;
	}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--){
		vector<string>a;
		cin>>s;
		stack<char>st;
		stack<long long>res;
		for(int i=0;i<s.length();i++)
			if(isdigit(s[i])){
				int num=0;
				while(isdigit(s[i]) && i<s.length())
					{
						num=num*10+s[i]-'0';
						i++;
					}
			a.push_back(to_string(num));
			i--;
			}
			else if(s[i]=='(')
				st.push(s[i]);
			else if(s[i]==')')
			{
				while(st.size() && st.top()!='(')
					{
						char tmp=st.top();
						a.push_back(string(1,tmp));
						st.pop();
					}
				st.pop();
			}
			else{
				while(st.size() && priority(st.top()) >=priority(s[i]))
					{
						char tmp=st.top();
						st.pop();
						a.push_back(string(1,tmp));
					}
				st.push(s[i]);
			}
			while(st.size()){
				char tmp=st.top();
				st.pop();
				a.push_back(string(1,tmp));
			}
			for(auto x:a)
				process(x,res);
			cout<<res.top()<<"\n";
		}
	}
