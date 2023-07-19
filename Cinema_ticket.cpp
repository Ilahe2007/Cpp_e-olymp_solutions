#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll a[10][10],b[10][10];
	for(ll i=0;i<10;i++){
		for(ll j=0;j<10;j++){
			a[i][j]=0;
		}
	}for(ll i=0;i<10;i++){
		for(ll j=0;j<10;j++){
			b[i][j]=j;
		}
	}ll number_of_tickets, movie, language;
	cout<<"Enter number of tickets you want to buy: ";
	cin>>number_of_tickets;
	cout<<"Enter movie you want to buy: \n 1.Barie \n 2.Elementar \n 3.Flash \n";
	cin>>movie;
	cout<<"Enter movie you want to buy: \n 1.RUS \n 2.AZE \n 3.ENG \n";
	cin>>language;
	ll m,n,c=0;
	while(number_of_tickets!=0){
		for(ll i=0;i<10;i++){
			for(ll j=0;j<10;j++){
				cout<<b[i][j]<<" ";
			}cout<<endl;
		}cout<<"Enter column and row: ";
		cin>>m>>n;
		if(a[m][n]==0){
			a[m][n]=1;
			if(movie==1){
				c+=5;
			}else if(movie==2){
				c+=6;
			}else{
				c+=7;
			}number_of_tickets--;
		}else{
			cout<<"This seat is taken choose another: \n";
		}
	}cout<<"Total: "<<c<<" AZN"<<endl;
}
