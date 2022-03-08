#include <iostream>
using namespace std;

//Wayan Chandra//

//Deklarasi//
string nama, grade;
double rataRataNilai, bobot;
int n, nim, tugasKe, uts, uas, kehadiran;
char inputLagi;
//Deklarasi End//

//Deklarasi int
int proses();
int akhir();
//Deklarasi int end//

int main(){
while(true){
	cout<<"|Menghitung Bobot Nilai|"<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Nama 	: ";cin>>nama;
	cout<<"NIM	: ";cin>>nim;
	cout<<"-----------------------"<<endl;
	cout<<"Berapa Banyak Tugas : ";cin>>n;
	for(int i = 1;i<=n;i++){
		cout<<"Tugas Ke "<<i<<" : ";cin>>tugasKe;
	}
	cout<<"-----------------------"<<endl;
	cout<<"UTS	: ";cin>>uts;
	cout<<"UAS	: ";cin>>uas;
	cout<<"Kehadiran : ";cin>>kehadiran;
	cout<<"-----------------------"<<endl;
	proses();
	cout<<endl;
}
}

int proses(){
	rataRataNilai = (tugasKe + uts + uas + kehadiran)/4;
	cout<<"Rata-Rata Nilai Adalah	: "<<rataRataNilai<<endl;
	if(rataRataNilai>=0 && rataRataNilai<=40.99){
		bobot = 0;
		grade = "E";
	} else if(rataRataNilai>=41 && rataRataNilai<=55.99){
		bobot = 1;
		grade = "D";
	} else if(rataRataNilai>=56 && rataRataNilai<=55.99){
		bobot = 2;
		grade = "C";
	} else if(rataRataNilai>=60 && rataRataNilai<=63.99){
		bobot = 2.5;
		grade = "C+";
	} else if(rataRataNilai>=64 && rataRataNilai<=67.99){
		bobot = 2.75;
		grade = "B-";
	} else if(rataRataNilai>=68 && rataRataNilai<=71.99){
		bobot = 3;
		grade = "B";
	} else if(rataRataNilai>=72 && rataRataNilai<=75.99){
		bobot = 3.5;
		grade = "B+";
	} else if(rataRataNilai>=76 && rataRataNilai<=80.99){
		bobot = 3.75;
		grade = "A-";
	} else if(rataRataNilai>=81 && rataRataNilai<=100){
		bobot = 4;
		grade = "A";
	} else {
		cout<<"!!!!!!!"<<endl;
	}
	cout<<"Bobot	: "<<bobot<<endl;
	cout<<"Grade	: "<<grade<<endl;
	akhir();
}

int akhir(){
	cout<<"\nApakah Anda Ingin Menginput Lagi? (y/n) : ";cin>>inputLagi;
	if(inputLagi=='Y' || inputLagi=='y'){
		system("cls");
		main();
	} else {
		system("cls");
		cout<<"\nProgram Selesai."<<endl;
		cout<<"Terima Kasih Telah Menggunakan Sistem Kami"<<endl;
		cout<<"------------------------------------------"<<endl;
		exit(0);
	}
}
