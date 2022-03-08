#include<iostream>
using namespace std;
int main()
{
    int i,n,ganjil=0,genap=0;
    cout<<"------------------------"<<endl;
    cout<<"Masukkan Nilai Awal: ";
    cin>>i;
    cout<<"Masukkan Nilai Akhir: ";
    cin>>n;
    cout<<"------------------------";
    cout<<"\nAngka Genap: ";
    while(i<=n)
    {
        if(i%2==0)
        {
            cout<<i<<",";
            genap++;
        }
        i++;

    }
    cout<<endl;
    cout<<"------------------------"<<endl;;
    cout<<"Masukkan Nilai Awal: ";
    cin>>i;
    cout<<"Masukkan Nilai Akhir: ";
    cin>>n;
    cout<<"------------------------";
    cout<<"\nAngka Ganjil: ";
    while(i<=n)
    {
        if(i%2!=0)
        {
            cout<<i<<",";
            ganjil++;
        }
        i++;
    }
    cout<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"\nTotal Angka Genap: "<<genap;
    cout<<"\nTotal Angka Ganjil: "<<ganjil;
    return 0;
}
