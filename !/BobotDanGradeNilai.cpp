#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int count_score(int nilai, int uts, int uas, int kehadiran);

int main() {
    int sum_tugas, tugas[100], uts, uas, kehadiran;
    double bobot, nilai=0;
    char ulang;
    string grade, nama, nim;

    while(true){
        cout<<"-----------------------------------------------------------------------"<<endl;
        cout<<"------------------- Menentukan Bobot dan Grade nilai ------------------"<<endl;
        cout<<"-----------------------------------------------------------------------"<<endl<<endl;
        cout<<"Nama : ";cin>>nama;
        cout<<"NIM  : ";cin>>nim;
        cout<<"Jumlah Tugas : ";cin>>sum_tugas;

        for (int i = 0; i < sum_tugas; i++) {
            cout<<"Tugas "<<i+1<<" : "; cin>>tugas[i];
        }

        for (int c = 0; c < sum_tugas; c++) {
            nilai += tugas[c];
        }
        nilai /= sum_tugas;
        cout<<"UTS  : ";cin>>uts;
        cout<<"UAS  : ";cin>>uas;
        cout<<"Kehadiran : ";cin>>kehadiran;

        nilai = count_score(nilai, uts, uas, kehadiran);

        if (100 >= nilai || nilai >= 81) {
            bobot=4;
            grade="A";
        }
        else if (81 > nilai || nilai >= 76) {
            bobot=3.75;
            grade="A-";
        }
        else if (76 > nilai || nilai >= 72) {
            bobot=3.5;
            grade="B+";
        }
        else if (72 > nilai || nilai >= 68) {
            bobot=3;
            grade="B";
        }
        else if (68 > nilai || nilai >= 64) {
            bobot=2.75;
            grade="B-";             
        }                
        else if (64 > nilai || nilai >= 60) {
            bobot=2.5;
            grade="C+"; 
        }
        else if (60 > nilai || nilai >= 56) {
            bobot=2;
            grade="C";
        }
        else if (56 > nilai || nilai >= 41) {
            bobot=1;
            grade="D";
        }
        else {
            bobot=0;
            grade="E";
        }   
        cout<<"\nRata-Rata Nilai : "<<nilai<<endl;
        cout<<"Bobot : "<<bobot<<endl;
        cout<<"Grade "<<grade<<endl;
        cout<<"\nApakah anda ingin menginput nilai lagi? (Y/T) : ";cin>>ulang;cout<<"\n";
        if (ulang=='Y' || ulang=='y') {
            system("cls");
        } else {
            system("cls");
            exit(0);
        }
    }   
    
    return 0;
}

int count_score(int nilai, int uts, int uas, int kehadiran) {
    return (nilai + uts + uas + kehadiran) / 4;
}
