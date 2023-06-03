#include<bits/stdc++.h>
using namespace std;
#define ll double

int main(){
	ll v,h;
	cin>>v>>h;
	ll s=3*v/h,l=sqrt(s),w=sqrt(s);
	ll a=l*sqrt((w*w)/4+h*h)+w*sqrt((l*l)/4+h*h);
	cout.precision(1);
	cout<<fixed<<a<<endl;
}
