#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n],menfi=0,musbet=0,sifir=0;
	for (long long i=0;i<n;i++){
		cin>>a[i];
		if (a[i]<0){
			menfi++;
		}else if (a[i]>0){
			musbet++;
		}else{
			sifir++;
		}
	}cout<<musbet<<" "<<menfi<<" "<<sifir<<endl;
}
