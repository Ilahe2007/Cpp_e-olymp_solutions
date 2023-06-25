#include<bits/stdc++.h>
using namespace std;

int main(){
    char a;
    int c=0,d=0;
    while(cin>>a){
        if(a=='-'){
            cout<<endl;
            c++;
        }else if(a=='A' and c==1){
            cout<<a<<endl;
            c=0;
        }else if(a=='B' and c==1){
            cout<<a;
        }else if(a=='S' and c==1){
            cout<<a;
        }else if(a=='M' and c==1){
            cout<<a<<endl;
            c=0;
        }else if(a=='_'){
            d++;
            if(d>1){
                cout<<a;
            }else{
                a=' ';
            }
        }else{
            cout<<a;
        }
    }
}
