#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int>v;
	string a;
	long long n;
	while (cin>>a){
		if (a=="push"){
			cin>>n;
			v.push(n);
			cout<<"ok"<<endl;
		}if (a=="pop"){
			if (v.empty()==false){
				cout<<v.front()<<endl;
				v.pop();
			}else{
				cout<<"error"<<endl;
			}
		}if (a=="front"){
			if (v.empty()==false){
				cout<<v.front()<<endl;
			}else{
				cout<<"error"<<endl;
			}
		}if (a=="size"){
			cout<<v.size()<<endl;
		}if (a=="clear"){
			cout<<"ok"<<endl;
			while (!v.empty()){
				v.pop();
			}
		}if (a=="exit"){
			cout<<"bye"<<endl;
			break;
		}
	}
}
