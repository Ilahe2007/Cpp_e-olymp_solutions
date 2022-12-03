#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n],c=0,d=0;
	for (long long i=0;i<n-1;i++){
		cin>>a[i];
		c+=a[i];
	}
	for (long long i=1;i<=n;i++){
		d+=i;
	}
	cout<<d-c;
}
