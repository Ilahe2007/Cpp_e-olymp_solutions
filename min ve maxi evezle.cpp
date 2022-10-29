#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	long long max=a[0];
	long long min=a[0];
	for (int i=1;i<n;i++){
		if (a[i]>max){
			max=a[i];
		}
		if (a[i]<min){
			min=a[i];
		}
	}
	for (int i=0;i<n;i++){
		if (a[i]==max){
			cout<<min<<" ";
		}else if (a[i]==min){
			cout<<max<<" ";
		}else{
			cout<<a[i]<<" ";
		}
}
}
