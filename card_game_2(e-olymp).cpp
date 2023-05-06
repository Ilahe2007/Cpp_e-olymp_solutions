#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}if(n%2==0){
		for(ll i=0;i<n/2;i++){
			if(i!=n-i-1){
				cout<<a[i]<<" "<<a[n-i-1]<<" ";	
			}else{
				cout<<a[i]<<" ";
			}
		}
	}else{
		for(ll i=0;i<=n/2;i++){
			if(i!=n-i-1){
				cout<<a[i]<<" "<<a[n-i-1]<<" ";	
			}else{
				cout<<a[i]<<" ";
			}
		}
	}
}
