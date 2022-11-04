#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,c=0;
	cin>>n;
	long long a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n-1;i++){
	for (int j=0;j<n-1;j++){
		if (a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	cout<<a[i]<<" ";
	}
}	
