#include <iostream>
using namespace std;

int main (){

int n;
cout<<"Masukkan Baris Segitiga Yang Akan Anda Buat : ";cin>>n;

for(int k = 1; k <= n; k++){
    for(int j = 1; j <= n-k; j++){
        cout<<" ";
    }
    for(int i = 1; i <= 2*k-1; i++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}