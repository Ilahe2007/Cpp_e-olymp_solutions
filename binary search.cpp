#include <bits/stdc++.h>
using namespace std;

int binary(int a[], int l, int r, int x){
	while(l <= r){
		int m = (l + r)/2;
		if(x == a[m]){
 		    return m;
 		}if(x > a[m]){
			l = m + 1;
 		}else{
 			r = m - 1;
 		}
 	}
	return -1;
}

int main(){
	long long n;
	cin>>n;
 	int a[n];
 	for (long long i=0;i<n;i++){
 		cin>>a[i];
	 }
 	long long x; 
 	cin>>x;
 	cout<<binary(a, 0,9, x)<<endl;
 }
