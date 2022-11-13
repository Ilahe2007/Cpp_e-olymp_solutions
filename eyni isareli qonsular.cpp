#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		if ((a[i]<0 && a[i+1]<0) || (a[i]>0 && a[i+1]>0)){
			cout<<a[i]<<" "<<a[i+1]<<endl;
		}
	}
}
