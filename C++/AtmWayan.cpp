// I Wayan Ardika Chandra 
// Kelompok 1
// Mesin Atm Sederhana Menggunakkan Loops dan Switch

// Keterangan:
// Cara kerja seperti ATM pada umumnya, tapi lebih sederhana saja. Ketika Program Dijalankan, saldo akan selalu 0.
// Supaya saldo bertambah, isi saldo melalui menu deposit (2) dengan nominal berapapun.

//Kelemahan
//Untuk angka banyak sampai jutaan misalnya, akan sulit dibaca karena tidak ada titik pemisah.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double amount, balance = 0; // Saldo Awal selalu 0
	int choice;
	
	cout<< fixed << setprecision(2); //uang
	
do {
	// Display Menu
	cout<<"\n---- ATM MACHINE ----\n\n";
	cout<<"1. Lihat Saldo"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Penarikan"<<endl;
	cout<<"4. Keluar"<<endl;
	cout<<endl;
	cout<<"Masukkan Pilihan Anda : ";
	
	// User Memilih/Input
	cin>>choice;
	
	// Opsi Evaluasi
	switch(choice){
	case 1:
		cout<<"Saldo Kamu Adalah: Rp." << balance << endl;
		break;
	
	case 2:
		cout<<"Berapa Banyak Yang Ingin Anda Deposit Rp.";
		cin>>amount;
		balance += amount;
		cout<<"Anda Telah Mendeposit Uang Senilai Rp."<<" "<<balance;
		break;
		
	case 3:
		cout<<"Berapa Banyak Jumlah Uang Yang Ingin Anda Tarik? Rp.";
		cin>>amount;
		if(balance - amount >= 0)
			balance -= amount;
		else 
			cout<<"Tidak Cukup\n";
		break;
		
	case 4:
		system("cls");
		cout<<"Terima Kasih:)";
		break;
		
	default:
		cout<<"Invalid, Coba Lagi Sesuai Menu Pilihan\n";	
	}
} while(choice != 4);
	
	return 0;
}
