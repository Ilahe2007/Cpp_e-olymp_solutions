#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}sort(a,a+n);
	long long l=0,r=n-1,c=0;
	while (l<r){
		if (a[l]+a[r]>k){
			r--;
		}else if (a[l]+a[r]<k){
			l++;
		}else if (a[l]+a[r]==k){
			cout<<"YES"<<endl;
			c++;
			break;
		}
	}if (c==0){
		cout<<"NO"<<endl;
	}
}	
