#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,q;
	cin>>n>>q;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}while (q--){
		long long x;
		cin>>x;
		if (binary_search(a,a+n,x)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
