#include <iostream>
using namespace std;

int proses1();
int proses2();

int main(){
// Pertama//	
int i = 1;
do {
	int j = 1;
    do {
    cout << "*";
    } while (++j <= i);
cout << "\n";
} while (++i <= 5);
cout<<endl;
proses1();	
}

int proses1(){
//Kedua//
	int n;
	cout<<"Masukkan Baris Segitiga Yang Akan Dibuat : ";cin>>n;
		for(int i=n;i>=1;i--){
		for(int k=n-i;k>0;k--){
			cout<<" ";
		}
		for(int j=i;j>0;j--){
			cout<<"* ";	
		}
		cout<<endl;
	}
cout<<endl;
proses2();
}

int proses2(){
	cout<<"Pola 1"<<endl;
	for(int i=1;i<=5;i++){
		for(int j=i;j<=5;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\nPola 2"<<endl;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\nPola 3"<<endl;
	for(int i=1;i<=5;i++){
		for(int s=i;s<5;s++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\nPola 4"<<endl;
	for(int i=1;i<=5;i++){
		for(int s=1;s<i;s++){
			cout<<" ";
		}
		for(int j=i;j<=5;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

