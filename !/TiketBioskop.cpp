#include <iostream>
using namespace std;

//WayanChandra//

//Deklarasi Nilai//
int pilih_menu, pilih_teater, pilih_snack, pilih_hari, pilih_film, harga_tiket;
int jumlahTiket;
int total;
int totalSnack;
int snackDipesan;
int snack;
int totalKeseluruhan;
int bayar;
int kembalian;
int pendapatan;
char pesananUlang;
long int premier_senin_jumat[1] = {65000};
long int premier_sabtu_minggu[1] = {75000};
long int reguler_senin_jumat[1] = {35000};
long int reguler_sabtu_minggu[1] = {45000};
long int frenchFries [1] = {20000};
long int mixPlater [1] = {25000};
long int popcornLarge [1] = {35000};
long int popcornSmall [1] = {15000};

//Akhir Deklarasi//

//Deklarasi Function//
int hariTiket();
int pilihSnack();
int proses();
int check();
//Akhir Deklarasi Function//

void menu1()
{
	 cout<<" \t   =============================";cout<<endl;
     cout<<" \t   ||  Program Tiket Bioskop  ||";cout<<endl;
     cout<<" \t   =============================";cout<<endl; cout<<endl;
 
     cout<<"\t    ||  Bioskop IT PLN 		 ||";cout<<endl;
     cout<<"\t    ||JL. Semanan No.04 Jakarta||";cout<<endl;
     cout<<endl;
     cout<<" =================================="<<endl;
     cout<<"\t*-------------------------------*"<<endl;
     cout<<"\t| 	 1.PEMBELIAN TIKET        |"<<endl;
     cout<<"\t| 	 2.PEMBELIAN SNACK        |"<<endl;
     cout<<"\t*-------------------------------*"<<endl;
     cout<<" =================================="<<endl;
}

void menu2()
{
	cout<<" ===================================================="<<endl;
    cout<<"\t*-------------------------------*"<<endl;
	cout<<"\t\tJENIS TEATER"<<endl;
	cout<<"\t*-------------------------------*"<<endl;
	cout<<" ===================================================="<<endl;
	cout<<"\t1. Tiket Premier"<<endl;
	cout<<"\t2. Tiket Reguler"<<endl;
	cout<<" ===================================================="<<endl;
	
	cout<<"=================INFO HARGA TIKET===================="<<endl;
	cout<<"Harga Tiket Premier Senin-Jumat 	= Rp. 65000"<<endl;
	cout<<"Harga Tiket Premier Sabtu-Minggu 	= Rp. 75000"<<endl;
	cout<<"Harga Tiket Reguler Senin-Jumat 	= Rp. 35000"<<endl;
	cout<<"Harga Tiket Reguler Sabtu-Minggu 	= Rp. 45000"<<endl;
	cout<<"====================================================="<<endl;
}

void menu3()
{
	cout<<"\t\tPILIHAN SNACK"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"1. MAKANAN  "<<endl;
	cout<<"2. MINUMAN "<<endl;
	cout<<"3. PAKET  "<<endl;
	cout<<"---------------------------------------------"<<endl;	
}

void menu4()
{
	cout<<"Pilih Hari :\n";
	cout<<"\t1.senin\n\t2.selasa\n\t3.rabu\n\t4.kamis\n\t5.jumat\n\t6.sabtu\n\t7.minggu";
}

int main()
{
	while(true){
	menu1();
	cout<<"Masukkan Pilihan Anda : ";cin>>pilih_menu;
	system("cls");
	if(pilih_menu==1){
		menu2();
		cout<<"Masukkan Pilihan Anda : ";cin>>pilih_teater;
		menu4();
		cout<<"\nMasukkan Pilihan Hari Anda : ";cin>>pilih_hari;
		cout<<endl;
		hariTiket(); // Proses Tiket Keseluruhan //
	} else if (pilih_menu==2){
		menu3();
		cout<<"Masukkan Pilihan Anda : ";cin>>pilih_snack;
		pilihSnack();
	} else {
		cout<<"Invalid";
	}
	}
}

int hariTiket()
{
	cout<<"Jumlah Tiket Yang Ingin Dipesan : ";cin>>jumlahTiket;
	cout<<endl;
	if (pilih_teater==1)
	{
	switch(pilih_hari)
	{
		case 1:
		total = premier_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 2:
		total = premier_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 3:
		total = premier_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 4:
		total = premier_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 5:
		total = premier_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 6:
		total = premier_sabtu_minggu[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 7:
		total = premier_sabtu_minggu[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		default:
		cout<<"Invalid";
	}
	proses();
	}
	
	if (pilih_teater==2)
	{
	switch(pilih_hari)
	{
		case 1:
		total = reguler_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 2:
		total = reguler_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 3:
		total = reguler_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 4:
		total = reguler_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 5:
		total = reguler_senin_jumat[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 6:
		total = reguler_sabtu_minggu[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		case 7:
		total = reguler_sabtu_minggu[0] * jumlahTiket;
		cout<<"Total Harga : "<<total<<endl;
		break;
		
		default:
		cout<<"Invalid";
	}
	proses();
	}		
}
	

int pilihSnack()
{
	if(pilih_snack==1)
	{
		cout<<"=======DAFTAR MENU========"<<endl;
		cout<<"1.French Fries\t\t= 20000"<<endl;
		cout<<"2.Mix Plater\t\t= 25000"<<endl;
		cout<<"3.Popcorn Large\t\t= 35000"<<endl;
		cout<<"4.Popcorn Small\t\t= 15000"<<endl;
		cout<<"=========================="<<endl;
		cout<<"Pilih SNACK (1-4)	: ";cin>>snack;
		cout<<"Jumlah Snack Yang Ingin Dipesan : ";cin>>snackDipesan;
		switch(snack)
		{
			case 1:
			totalSnack = frenchFries[0] * snackDipesan;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 2:
			totalSnack = mixPlater[0] * snackDipesan;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 3:
			totalSnack = popcornLarge[0] * snackDipesan;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 4:
			totalSnack = popcornSmall[0] * snackDipesan;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;	
			
		}
		proses();	
	}
	
	if(pilih_snack==2)
	{
		cout<<"=======DAFTAR MENU========"<<endl;
		cout<<"1.Coca-cola\t\t=20000"<<endl;
		cout<<"2.Iced lychee tea\t=35000"<<endl;
		cout<<"3.Milo\t\t\t=25000"<<endl;
		cout<<"4.Super Green\t\t=27000"<<endl;
		cout<<"=========================="<<endl;
		cout<<"Pilih Minuman (1-4)	: ";cin>>snack;
		cout<<"Jumlah Snack Yang Ingin Dipesan : ";cin>>snackDipesan;
		switch(snack)
		{
			case 1:
			totalSnack = snackDipesan * 20000;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 2:
			totalSnack = snackDipesan * 35000;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 3:
			totalSnack = snackDipesan * 25000;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 4:
			totalSnack = snackDipesan * 27000;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;	
			
		}
		proses();	
	}
	
	if(pilih_snack==3)
	{
		cout<<"=======DAFTAR MENU========"<<endl;
		cout<<"1.French Fries + Coca-cola\t\t=35000"<<endl;
		cout<<"2.French Fries + Super Green\t\t=46000"<<endl;
		cout<<"3.Popcorn Small+  Coca-cola\t\t=33000"<<endl;
		cout<<"4.Popcorn Small + Super Green\t\t=41000"<<endl;
		cout<<"=========================="<<endl;
		cout<<"Pilih Paket (1-4)	: ";cin>>snack;
		cout<<"Jumlah Snack Yang Ingin Dipesan : ";cin>>snackDipesan;
		switch(snack)
		{
			case 1:
			totalSnack = snackDipesan * 35000;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 2:
			totalSnack = snackDipesan * 46000;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 3:
			totalSnack = snackDipesan * 33000;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;
			
			case 4:
			totalSnack = snackDipesan * 41000;
			cout<<"Total Harga : "<<totalSnack<<endl;
			break;		
		}
		proses();
	}	
}

int proses()
{
	system("cls");
	totalKeseluruhan = total + totalSnack;
	cout<<"Jadi Total Keseluruhan Adalah : "<<totalKeseluruhan<<endl;
	cout<<"================================================\n";
	cout<<"Harga Yang Harus Anda Bayar : "<<totalKeseluruhan<<endl;
	cout<<"Masukkan Uang Anda : ";cin>>bayar;
	kembalian = bayar - totalKeseluruhan;
	cout<<"Kembalian Anda Adalah "<<kembalian<<endl;
	pendapatan = pendapatan + totalKeseluruhan;
	check();
}

int check() 
{
	cout<<"Apakah Anda Ingin Melakukan Pesanan Ulang? (y/n): ";cin>>pesananUlang;
	if (pesananUlang == 'y' || pesananUlang == 'Y'){
		main();
	} else {
		cout<<"Terimakasih Sudah Menggunakan Sistem Kami "<<endl;
		cout<<"Pendapatan hari ini : Rp.  "<<pendapatan<<endl;
		exit(0);
	}	
}
