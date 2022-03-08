#include <iostream>
using namespace std;

//Wayan Chandra//

// Deklarasi //
string namaKaryawan[4] = {"Wayan", "Adi", "Fito", "Raffi"};
long int golonganUpah[4] = {6000, 7000, 8000, 9000};
int golonganKaryawan;
int karyawan;
int jamKerja;
int jumlahJamKerja;

//Int Deklarasi//
int proses();


void nama()
{
	cout<<"========== Nama-Nama Karyawan =========="<<endl;
	cout<<"1. "<<namaKaryawan[0]<<endl;
	cout<<"2. "<<namaKaryawan[1]<<endl;
	cout<<"3. "<<namaKaryawan[2]<<endl;
	cout<<"4. "<<namaKaryawan[3]<<endl;
	cout<<"----------------------------------------------"<<endl;	
}

void golongan()
{
	cout<<"|Golongan-Golongan Karyawan Dan Jumlah Jam Kerja|"<<endl;
	cout<<"1. Golongan A Dengan Upah Per Jam Yaitu Rp."<<golonganUpah[0]<<endl;
	cout<<"2. Golongan B Dengan Upah Per Jam Yaitu Rp."<<golonganUpah[1]<<endl;
	cout<<"3. Golongan C Dengan Upah Per Jam Yaitu Rp."<<golonganUpah[2]<<endl;
	cout<<"4. Golongan D Dengan Upah Per Jam Yaitu Rp."<<golonganUpah[3]<<endl;
	cout<<"----------------------------------------------"<<endl;	
}

int main(){
	nama(); //void nama//
	cout<<"Pilih Nama Karyawan (1-4) : ";cin>>karyawan;
	cout<<endl;
	proses(); //ke int proses//
}

int proses()
{
	switch(karyawan)
	{
		case 1:
		cout<<"Nama Karyawan : "<<namaKaryawan[0]<<endl;
		golongan();
		cout<<"Pilih Golongan Karyawan (1-4) : ";cin>>golonganKaryawan;
		cout<<"Masukkan Jam Kerja Dalam Sehari (1-24) : ";cin>>jamKerja;
		system("cls");
		if(golonganKaryawan==1){
			jumlahJamKerja = golonganUpah[0] * jamKerja;
			cout<<namaKaryawan[0]<<" Termasuk Golongan A Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==2){
			jumlahJamKerja = golonganUpah[1] * jamKerja;
			cout<<namaKaryawan[0]<<" Termasuk Golongan B Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==3){
			jumlahJamKerja = golonganUpah[2] * jamKerja;
			cout<<namaKaryawan[0]<<" Termasuk Golongan C Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==4){
			jumlahJamKerja = golonganUpah[3] * jamKerja;
			cout<<namaKaryawan[0]<<" Termasuk Golongan D Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else {
			cout<<"Invalid !";
			system("cls");
			main();
		}
		break;
		
		case 2:
		cout<<"Nama Karyawan : "<<namaKaryawan[1]<<endl;
		golongan();
		cout<<"Pilih Golongan Karyawan (1-4) : ";cin>>golonganKaryawan;
		cout<<"Masukkan Jam Kerja Dalam Sehari (1-24) : ";cin>>jamKerja;
		system("cls");
		if(golonganKaryawan==1){
			jumlahJamKerja = golonganUpah[0] * jamKerja;
			cout<<namaKaryawan[1]<<" Termasuk Golongan A Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==2){
			jumlahJamKerja = golonganUpah[1] * jamKerja;
			cout<<namaKaryawan[1]<<" Termasuk Golongan B Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==3){
			jumlahJamKerja = golonganUpah[2] * jamKerja;
			cout<<namaKaryawan[1]<<" Termasuk Golongan C Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==4){
			jumlahJamKerja = golonganUpah[3] * jamKerja;
			cout<<namaKaryawan[1]<<" Termasuk Golongan D Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else {
			cout<<"Invalid !";
			system("cls");
			main();
		}
		break;
		
		case 3:
		cout<<"Nama Karyawan : "<<namaKaryawan[2]<<endl;
		golongan();
		cout<<"Pilih Golongan Karyawan (1-4) : ";cin>>golonganKaryawan;
		cout<<"Masukkan Jam Kerja Dalam Sehari (1-24) : ";cin>>jamKerja;
		system("cls");
		if(golonganKaryawan==1){
			jumlahJamKerja = golonganUpah[0] * jamKerja;
			cout<<namaKaryawan[2]<<" Termasuk Golongan A Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==2){
			jumlahJamKerja = golonganUpah[1] * jamKerja;
			cout<<namaKaryawan[2]<<" Termasuk Golongan B Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==3){
			jumlahJamKerja = golonganUpah[2] * jamKerja;
			cout<<namaKaryawan[2]<<" Termasuk Golongan C Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==4){
			jumlahJamKerja = golonganUpah[3] * jamKerja;
			cout<<namaKaryawan[2]<<" Termasuk Golongan D Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else {
			cout<<"Invalid !";
			system("cls");
			main();
		}
		break;
		
		case 4:
		cout<<"Nama Karyawan : "<<namaKaryawan[3]<<endl;
		golongan();
		cout<<"Pilih Golongan Karyawan (1-4) : ";cin>>golonganKaryawan;
		cout<<"Masukkan Jam Kerja Dalam Sehari (1-24) : ";cin>>jamKerja;
		system("cls");
		if(golonganKaryawan==1){
			jumlahJamKerja = golonganUpah[0] * jamKerja;
			cout<<namaKaryawan[3]<<" Termasuk Golongan A Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==2){
			jumlahJamKerja = golonganUpah[1] * jamKerja;
			cout<<namaKaryawan[3]<<" Termasuk Golongan B Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==3){
			jumlahJamKerja = golonganUpah[2] * jamKerja;
			cout<<namaKaryawan[3]<<" Termasuk Golongan C Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else if (golonganKaryawan==4){
			jumlahJamKerja = golonganUpah[3] * jamKerja;
			cout<<namaKaryawan[3]<<" Termasuk Golongan D Dengan Hasil Upah Dari Jam Kerja Selama "<<jamKerja<<" Jam"<<" Yaitu : "<<jumlahJamKerja<<endl;
		} else {
			cout<<"Invalid !";
			system("cls");
			main();
		}
		break;
		
		default:
		cout<<"Invalid !"<<endl;
		system("cls");
		main();	
	}	
}
