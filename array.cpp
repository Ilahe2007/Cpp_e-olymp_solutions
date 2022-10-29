#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	double b;
	long long c=0;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>b;
	if (b<30){
		c++;
	}
	
}if (ceil((c*0.2)/(0.9))==floor((c*0.2)/(0.9))){
	cout.precision(0);
	cout<<fixed<<(c*0.2)/(0.9)<<" "<<c;
}else{
	if (c*0.2>0.9){
	cout.precision(0);
	cout<<fixed<<((c*0.2)/(0.9))<<" "<<c;
}else{
	cout.precision(0);
	cout<<fixed<<1<<" "<<c;
}
}

}
