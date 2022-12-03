#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin>>n>>m;
	long long a[n][m],b[n][m];
	for (long long i=0;i<n;i++){
		for (long long j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for (long long i=0;i<n;i++){
		for (long long j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	for (long long i=0;i<n;i++){
		for (long long j=0;j<m;j++){
			if (j!=m-1){
				cout<<b[i][j]+a[i][j]<<" ";
			}else{
				cout<<b[i][j]+a[i][j]<<endl;
			}
		}
	}
}
