#include <iostream>

using namespace std;

int main()
{
	char ulang;
	int nilai, awal;

	// do while //
	// Minimal Menjalankan Satu kali walaupun kondisi tidak memenuhi //
	do{
	system("cls");
	cout<<"Masukkan Nilai Awal : ";cin>>awal;
	cout<<endl;
	cout<<"Masukkan Nilai Akhir : ";cin>>akhir;
	cout<<endl;
	cout<<endl;

cout<<"Bilangan Genap"<<endl;
for(int i=awal;i<=akhir;i++){
	if(i%2==0){
		cout<<i<<",";
	}
	
}	
cout<<endl;
cout<<endl;

cout<<"Bilangan Ganjil"<<endl;
for(int j=awal;j<=akhir;j++){
	if(j%2!=0){
		cout<<j<<",";
	}
	
}	
cout<<endl;
cout<<endl;
cout<<"Akhir"<<endl;	
		
	cout<<"Belajar C++"<<endl;	
	cout<<"Ulang [y/n] : ";cin>>ulang; //Akan diulang selama kita mengetik y/Y //
		
				
	}while(ulang=='y' || ulang=='Y');
	
	cout<<"Akhir Program"<<endl;
	
	
	
	return 0;
}
