#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-1;j++){
			if (a[j]%10>a[j+1]%10){
				swap(a[j],a[j+1]);
			}else if (a[j]%10==a[j+1]%10){
				if (a[j]>a[j+1]){
					swap(a[j],a[j+1]);
				}
			}
		}
	}
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}