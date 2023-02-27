#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

ll f(ll n){
	ll a=n;
	for (ll i=2;i<=sqrt(n);i++){
		if (n%i==0){
			while (n%i==0){
				n/=i;
			}a-=a/i;
		}
	}if (n>1){
		a-=a/n;
	}return a;
}

int main(){
	ll sum[10001]={0};
	ll t;
	cin>>t;
	for (ll i=1;i<=10000;i++){
		sum[i]=sum[i-1]+f(i);
	}while(t--){
		ll n;
		cin>>n;
		cout<<sum[n]*sum[n]<<endl;
	}
}
