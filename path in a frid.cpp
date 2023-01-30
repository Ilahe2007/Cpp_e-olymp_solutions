#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin>>n>>m;
	long long a[n][m];
	for (long long i=0;i<n;i++){
		for (long long j=0;j<m;j++){
			cin>>a[i][j];
		}
	}for (long long i=0;i<n;i++){
		for (long long j=0;j<m;j++){
			if (i==0 && j==0){
				a[i][j]=a[i][j];
			}else if (i==0){
				a[i][j]+=a[i][j-1];
			}else if (j==0){
				a[i][j]=a[i-1][j]+a[i][j];
			}else{
				a[i][j]=min(a[i-1][j],a[i][j-1])+a[i][j];
			}
		}
	}cout<<a[n-1][m-1]<<endl;
}
