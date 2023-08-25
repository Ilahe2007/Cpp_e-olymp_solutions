#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool f(ll n){
	bool a=true;
	if(n<=1){
		a=false;
	}else{
		for(ll i=2;i<=sqrt(n);i++){
			if(n%i==0){
				a=false;
				break;
			}
		}
	}return a;
}

void generateCombinations(const  string& n,string& a, int start,vector<string>& c){
    for (int i = start; i < n.length(); ++i) {
        a.push_back(n[i]);
        c.push_back(a);
        generateCombinations(n, a, i + 1, c);
        a.pop_back();
    }
}

int main() {
	string n,a="";
    cin>>n;
    vector<string>c;
    generateCombinations(n, a, 0, c);
    sort(c.begin(),c.end());
    map<ll,ll>m;
    for (ll i=0;i<c.size();i++){
        if(f(stoll(c[i]))){
        	m[c[i].size()]=stoll(c[i]);
		}
    }if(m.size()!=0){
		for(auto x=m.rbegin();x!=m.rend();x++){
    		cout<<x->second<<endl;
    		break;
    	}
	}else{
		cout<<0<<endl;
	}
}
