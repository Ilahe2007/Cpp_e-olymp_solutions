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
			if (a[i][j]<0 and a[i][j]%2==0){
				b+=a[i][j];
				c++;
			}
		}
	}
	cout<<c<<" "<<b;
}
