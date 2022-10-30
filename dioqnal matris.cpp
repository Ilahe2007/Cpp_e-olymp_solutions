#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,b=0,c=0;
	cin>>n;
	long long a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i==j){
				b+=a[i][j];
			}
			if (i+j==(n-1)){
				c+=a[i][j];
			}
		}
	}
	cout<<b<<" "<<c;
}
