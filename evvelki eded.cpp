#include<bits/stdc++.h>
using namespace std;
#define ll int

ll f(ll n){
	for (ll i=n-1;i>=0;i--){
		if (ceil(log2(i))==floor(log2(i))){
			return i;
			break;
		}
	}
}

int main(){
	ll n;
	cin>>n;
	cout<<f(n)<<endl;
}
