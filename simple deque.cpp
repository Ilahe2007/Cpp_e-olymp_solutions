#include<bits/stdc++.h>
using namespace std;

int main(){
	deque<long long>d;
	string a;
	long long n;
	while (cin>>a){
		if (a=="push_back"){
			cin>>n;
			cout<<"ok"<<endl;
			d.push_back(n);
		}if (a=="push_front"){
			cin>>n;
			cout<<"ok"<<endl;
			d.push_front(n);
		}if (a=="size"){
			cout<<d.size()<<endl;
		}if (a=="clear"){
			cout<<"ok"<<endl;
			d.clear();
		}if (a=="back"){
			if (d.size()!=0){
				cout<<d.back()<<endl;
			}else{
				cout<<"error"<<endl;
			}
		}if (a=="front"){
			if (d.size()!=0){
				cout<<d.front()<<endl;
			}else{
				cout<<"error"<<endl;
			}
		}if (a=="exit"){
			cout<<"bye"<<endl;
			break;
		}if (a=="pop_back"){
			if (d.size()!=0){
				cout<<d.back()<<endl;
				d.pop_back();
			}else{
				cout<<"error"<<endl;
			}
		}if (a=="pop_front"){
			if (d.size()!=0){
				cout<<d.front()<<endl;
				d.pop_front();
			}else{
				cout<<"error"<<endl;
			}
		}
	}
}
