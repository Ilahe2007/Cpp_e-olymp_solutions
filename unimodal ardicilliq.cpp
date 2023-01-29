#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,q;
	cin>>n>>q;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}sort(a,a+n);
	while (q--){
		long long x;
		cin>>x;
		cout<<upper_bound(a,a+n,x)-lower_bound(a,a+n,x)<<endl;
	}
}
