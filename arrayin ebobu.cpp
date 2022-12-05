#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}
	long long g=a[0];
	for (long long i=0;i<n;i++){
		g=__gcd(g,a[i]);
	}
	cout<<g;
}
