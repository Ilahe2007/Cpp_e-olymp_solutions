#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,c;
	string a,b;
	cin>>n;
	string ad[n],soyad[n];
	ll il[n];
	for(ll i=0;i<n;i++){
		cin>>ad[i]>>soyad[i]>>il[i];
	}for(ll j=0;j<n-1;j++){
		for(ll i=0;i<n-1;i++){
			if(soyad[i]>soyad[i+1]){
				swap(soyad[i],soyad[i+1]);
				swap(ad[i],ad[i+1]);
				swap(il[i],il[i+1]);
			}else if(soyad[i]==soyad[i+1]){
				if(ad[i]>ad[i+1]){			
					swap(ad[i],ad[i+1]);
					swap(il[i],il[i+1]);
				}else if(ad[i]==ad[i+1]){
					if(il[i]<il[i+1]){
						swap(il[i],il[i+1]);
					}
				}
			}
		}
	}for(ll i=0;i<n;i++){
		cout<<ad[i]<<" "<<soyad[i]<<" "<<il[i]<<endl;
	}
}
