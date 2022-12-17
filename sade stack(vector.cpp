#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v;
	string a;
	long long n;
	while (cin>>a){
		if (a=="push"){
			cin>>n;
			v.push_back(n);
			cout<<"ok"<<endl;
		}if (a=="pop"){
			if (v.size()!=0){
				cout<<v.back()<<endl;
				v.pop_back();
			}else{
				cout<<"error"<<endl;
			}
		}if (a=="back"){
			if (v.size()!=0){
				cout<<v.back()<<endl;
			}else{
				cout<<"error"<<endl;
			}
		}if (a=="size"){
			cout<<v.size()<<endl;
		}if (a=="clear"){
			cout<<"ok"<<endl;
			v.clear();
		}if (a=="exit"){
			cout<<"bye"<<endl;
			break;
		}
	}
}
