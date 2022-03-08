#include <iostream>

using namespace std;

int main(){
	
	int b = 0;
	while(b<5){
		int k=0;
		while(k<5){  //perulangan didalam dulu setelah tidak memenuhi, perulangan keluar //
			cout<<"*";
			k++;
		}
		cout<<endl;
		b++;
	}
	
	for (int baris = 0;baris<5;baris++){
		for(int kolom =0;kolom<baris;kolom++){
			cout<<"*";
		}
		cout<<endl;
	}
}
