#include<bits/stdc++.h>
using namespace std;
#define ll long long

string f(ll n){
	string a="";
	while(n/2!=0){
		a+=to_string(n%2);
		n/=2;
	}a+=to_string(n%2);
	return a;
}

int main(){
	ll n,k;
	cin>>n>>k;
	if(f(n)[k-1]=='1'){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
