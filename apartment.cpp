#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,k;
	cin>>n>>m>>k;
	long long a[n],b[m];
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}for (long long i=0;i<m;i++){
		cin>>b[i];
	}sort(a,a+n);
	sort(b,b+m);
	long long c=0,i=0,j=0;
	while (j<m && i<n){
		if (a[i]-k<=b[j] && b[j]<=a[i]+k){
			c++;
			i++;	
			j++;
		}else if (b[j]<a[i]){
			j++;
		}else{
			i++;
		}
	}cout<<c<<endl;
}
