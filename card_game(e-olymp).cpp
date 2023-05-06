#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main(){
	ll n;
	cin>>n;
	ll a[n],h=0,y=0,l=0,r=n-1,c=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}while(l<=r){
		c++;
		if(max(a[l],a[r])==a[l]){
			if(c%2!=0){
				h+=a[l];
			}else{
				y+=a[l];
			}l++;
		}else{
			if(c%2!=0){
				h+=a[r];
			}else{
				y+=a[r];
			}r--;
		}
	}cout<<h<<" "<<y<<endl;
}
