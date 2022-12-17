#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<long long>v;
	long long n;
	cin>>n;
	for (long long i=0;i<n;i++){
		long long a,b;
		cin>>a;
		if (a==1){
			cin>>b;
			v.push(b);
		}if (a==2){
			cout<<v.top()<<endl;
			v.pop();
		}
	}
}
