#include<bits/stdc++.h>
using namespace std;

int main(){
	double d,p;
	cin>>d>>p;
	double s=d*d+2*d*sqrt(p*p-(d*d/4));
	double v=sqrt(p*p-(d*d/2))*d*d/3;
	cout.precision(3);
	cout<<fixed<<s<<" "<<fixed<<v<<endl;
}
