#include<iostream>
using namespace std;

int main(){
	int n;
	int c=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		if (i%2!=0 and i%3!=0 and i%5!=0){
			c++;
		}
	}
	cout<<c;
	return 0;
}
