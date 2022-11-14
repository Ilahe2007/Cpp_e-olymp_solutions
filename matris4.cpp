#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for (int i=0;i<n;i++){
	long long f=0;
		for (int j=0;j<n;j++){
			
			f+=a[i][j];
		}
	cout<<f<<endl;
	}
}
