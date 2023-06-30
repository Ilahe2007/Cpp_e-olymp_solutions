#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	vector<string>v;
	while(cin>>n){
		stack<ll>s;
		queue<ll>q;
		priority_queue<ll>pq;
		ll qu=0,pr=0,st=0;
		ll a,b,c=0,d=0;
		while(n--){
			cin>>a>>b;
			if(a==1){
				s.push(b);
				q.push(b);
				pq.push(b);
				c++;
			}else{
				d++;
				if(b==s.top()){
					st++;
					s.pop();
				}if(b==pq.top()){
					pr++;
					pq.pop();
				}if(b==q.front()){
					qu++;
					q.pop();
				}
			}
		}if(qu!=d and st!=d and pr!=d){
			v.push_back("impossible");
		}else if(qu==d and st!=d and pr!=d){
			v.push_back("queue");
		}else if(qu!=d and st==d and pr!=d){
			v.push_back("stack");
		}else if(qu!=d and st!=d and pr==d){
			v.push_back("priority queue");
		}else{
			v.push_back("not sure");
		}
	}for(ll i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}
