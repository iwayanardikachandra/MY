#include<iostream>
using namespace std;

int main(){
	int segitiga;
	
	cout<<"masukkan jumlah segitiga : ";
	cin>>segitiga;
	cout<<endl;
		for(int i=1; i<=segitiga; i++){
		for(int j=i;j<segitiga;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
			}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
			
		cout<<endl;	
		}
		cout<<endl;
		for(int i=1; i<=segitiga; i++){
		for(int j=1; j<i; j++){
			cout<<" ";
		}
		for(int j=i;j<=segitiga; j++){
		cout<<"*";
		}
		for(int j=i;j<=segitiga; j++){
		cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	
	int i =1;
	while (i <= segitiga){
		int j = 1;
	while ( j < i){
		cout<<" ";
		j++;
	}
	j = i;
	while (j <= segitiga){
		cout<<"*";
		j++;
	}
	 j = i;
	while ( j <= segitiga ){
	cout<<"*";	
	j++;
	}
	i++;
	cout<<endl;
	}
	cout<<endl;
	
	int a =1;
	while ( a <= segitiga){
		int j = a;
		while ( j < segitiga){
			cout<<" ";
			j++;
		}
		
		j = 1;
		while ( j <= a ){
			cout<<"*";
			j++;	
		}
		
			j = 1;
		while ( j <= a){
			cout<<"*";
			j++;	
		}
	a++;
	cout<<endl;
	}
}
