#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a=n/10;
	int b=n%10;
	swap(a,b);
	cout<<a<<b;
	return 0;
}
