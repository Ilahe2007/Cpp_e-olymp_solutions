#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b;
	cin>>a>>b;
	cout<<"Ebob: "<<__gcd(a,b)<<endl;
	cout<<"Ekob: "<<(a*b)/(__gcd(a,b))<<endl;
}
