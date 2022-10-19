#include <iostream>
#include <algorithm>    
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x=max(a,b);
	int y=max(c,d);
	cout<<max(x,y);
	return 0;
}
