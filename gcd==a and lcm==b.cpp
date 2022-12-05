#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while (t--){
		long long a,b;
		cin>>a>>b;
		if (__gcd(a,b)==a){
			cout<<a<<" "<<b<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
}
