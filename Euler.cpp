#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll f(ll n){
	ll ans=n;
	for (ll i=2;i<=sqrt(n);i++){
		if (n%i==0){
			while (n%i==0){
				n/=i;
			}ans-=ans/i;
		}
	}if (n>1){
		ans-=ans/n;
	}return ans;
}

int main(){
	ll n;
	while (cin>>n){
		cout<<f(n)-1<<endl;
	}
}
