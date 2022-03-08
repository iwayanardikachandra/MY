#include <iostream>
#include <string>

using namespace std;
// declaring the function from bottom (line 37 until line 155)
int proses_makanan();
int proses_minuman();
int check();
int count();
// end of function declaring

// declaring the datatypes that used in the program
int pilihan, menu_makanan, menu_drink, pesanan, total=0, pay, minum, tm=0;
long int makanan[4] = {18000, 28000, 32000, 42000};
long int minuman[4] = {7000, 5000, 8000, 6000};
long int pendapatan;
double disc = .25, final= 0.0, back;
bool loop;
string yn, drink_order, food_order;
// end of declaring datatypes

// main class will be compiled first
int main(){
	while(true){
		cout<<"Ingin memesan makanan ? (y/n)";cin>>food_order;
		if (food_order=="y" || food_order=="Y"){
			proses_makanan();
			cout<<"Ingin memesan minuman ? (y/n)";cin>>drink_order;
			if (drink_order=="y" || drink_order=="Y"){
				proses_minuman();		
			}
		} else {
			proses_minuman();
		}
		count();
		check();
		
		
	}
}

void menu_() {
	cout<<endl;
	cout<<" 	MAC DONALD SULTAN AGUNG "<<endl;
	cout<<" 	DAFTAR  MENU MAKANAN "<<endl;
	cout<<" 1. | PAKET PANAS 1 \t\t= Rp. 18.0000 | "<<endl;
	cout<<" 2. | PAKET PANAS 2 \t\t= Rp. 28.0000 | "<<endl;
	cout<<" 3. | PAKET MANTAP 1 \t\t= Rp. 32.0000 | "<<endl;
	cout<<" 4. | PAKET MANTAP 2 \t\t= Rp. 42.0000 | "<<endl;
	cout<<"    |=========================================|"<<endl;
};

void menu_minuman() {
	cout<<" 	DAFTAR  MENU  MINUM "<<endl;
	cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
	cout<<" 2. | PEPSI \t\t\t = Rp. 5000 |"<<endl;
	cout<<" 3. | CHOCOLATE \t\t = Rp. 8000 | "<<endl;
	cout<<" 4. | TEH BOTOl \t\t = Rp. 6000 | "<<endl;
	cout<<"    |=========================================|0"<<endl;
}

int proses_makanan() {
	menu_();
	cout<<" PILIH MENU MAKANAN ANDA = ";
		cin>>menu_makanan;
		switch (menu_makanan){
			case 1 :
			cout<<" 1. | PAKET PANAS 1 \t = Rp. 18.0000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>pesanan;
			total = makanan[menu_makanan-1] * pesanan;
			break;
		case 2 :
			cout<<" 2. | PAKET PANAS 2 \t = Rp. 28.0000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>pesanan;
			total = makanan[menu_makanan-1] * pesanan;
			break;
		case 3 :
			cout<<" 3. | PAKET MANTAP 1 \t = Rp. 32.0000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>pesanan;
			total = makanan[menu_makanan-1] * pesanan;
			break;
		case 4 :
			cout<<" 4. | PAKET MANTAP 2 \t = Rp. 42.0000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>pesanan;
			total = makanan[menu_makanan-1] * pesanan;
			break;
			cout<<endl;
		default:
			cout<<" Maaf menu yang anda ingin belum ready :) "<<endl;
		}
		cout<<" total harga makanan \t\t = Rp. "<<total<<endl;
		cout<<endl;	
}


int proses_minuman() {
	menu_minuman();
	cout<<"Masukan Pilihan Minuman anda : "; cin>>menu_drink;
	switch(menu_drink) {
		case 1:
			cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>minum;
			tm = minuman[menu_drink - 1] * minum;
			break;
		case 2:
			cout<<" 2. | PEPSI \t\t\t = Rp. 5000 |"<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>minum;
			tm = minuman[menu_drink - 1] * minum;
			break;
		case 3:
			cout<<" 3. | CHOCOLATE \t\t = Rp. 8000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>minum;
			tm = minuman[menu_drink - 1] * minum;
			break;
		case 4:
			cout<<" 4. | TEH BOTOl \t\t = Rp. 6000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>minum;
			tm = minuman[menu_drink - 1] * minum;
			break;
		default: cout<<"Pilihlah sesuai yang ada di menu! ";
	}
	cout<<" total harga minuman \t\t = Rp. "<<tm<<endl;
	cout<<endl;
}

int count() {
	total = total + tm;
	if (total >= 200000) {
		final = total - (total*disc);
		cout<<"Anda Sudah berbelanja lebih dari Rp. 150.000"<<endl;
		cout<<"Maka harga belanjaan anda menjadi : "<<final<<endl;
	} else {
		final = total;
		cout<<"harga yang harus anda bayar adalah : "<<final<<endl;
	}
	cout<<"Masukan Uang bayar : ";cin>>pay;
	back = pay - final;
	cout<<"kembalian anda : "<<back<<endl;
	cout<<endl;	
	pendapatan += final;
}

int check() {
	cout<<"Apakah anda ingin melakukan pesanan ulang? (y/n)";cin>>yn;
	if (yn=="n" || yn=="N" ) {
		system("cls");
		cout<<"Terimakasih sudah menggunakan system kami "<<endl;	
		cout<<"Pendapatan hari ini : "<<pendapatan<<endl;
		exit(0);
	}
	system("cls");
}

