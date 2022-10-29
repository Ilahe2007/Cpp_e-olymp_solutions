#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	double a[n];
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
	for (int i=0; i<n;i++){
        if (a[i]<=2,5){
        	cout.precision(2);
			cout<<i+1<<" "<<fixed<<a[i]<<endl;		
			return 0;
	}
		
	}cout<<"Not Found"<<endl;
}


