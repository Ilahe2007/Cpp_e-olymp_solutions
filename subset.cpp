#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printSubset(vector<ll>array,vector<ll>subset,ll index){
   for(auto nums:subset){
     cout<<nums<<" ";
   }cout<<endl;
   for(ll i=index;i<array.size();i++){
     subset.push_back(array[i]);
     printSubset(array,subset,i+1);
     subset.pop_back();
   }return ;
}

void generateSubset(vector<ll>array){
  vector<ll>subset;
  printSubset(array,subset,0);
}

int main(){
  vector<ll>array={1,2,3};
  generateSubset(array);
  return 0;
}
