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
	}long long c=0;
	for (long long i=0;i<n;i++){
		for (long long j=0;j<m;j++){
			cin>>b[i][j];
			if (b[i][j]==1){
				c+=a[i][j];
			}
		}
	}cout<<c<<endl;
}
