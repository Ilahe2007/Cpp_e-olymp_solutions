#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int>s;
	string a;
	long long n;
	while (cin>>a){
		if (a=="push"){
			cin>>n;
			s.push(n);
		}if (a=="pop"){
			if (s.size()!=0){
				s.pop();
			}
		}if (a=="top"){
			if (s.size()!=0){
				cout<<s.top()<<endl;
			}
		}
	}
}
