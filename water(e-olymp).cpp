#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}sort(a,a+n);
	if (a[n-1]>k){
		cout<<"Impossible"<<endl;
	}else{
		long long l=0,r=n-1,c=0;
		while (l<=r){
			if (a[l]+a[r]<=k){
				l++;
				r--;
				c++;
			}else{
				r--;
				c++;
			}
		}cout<<c<<endl;
	}
}
