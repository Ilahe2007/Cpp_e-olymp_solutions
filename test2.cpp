#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	if (a+b+c==180){
		if (a==b && b==c && a==60){
			cout<<"Equilateral"<<endl;
		}else if (a==b || b==c || a==c){
			cout<<"Isosceles"<<endl;
		}else {
			cout<<"Scalene"<<endl;
		}
	}else{
		cout<<"Error";
	}
}
