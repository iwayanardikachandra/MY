#include<iostream>
using namespace std;

int main ()
{
    struct tanggal
    {
        int tgl,bln,thn;
    };

    struct buku
    {
        int kb,nr;
        char r_u[2];
    };

    struct mahasiswa
    {
        int no;
        char nama[20];
        int peminjaman;
        int nrp;
        struct tanggal tgl;
        struct buku bku[20];
    };

    struct mahasiswa mhs[20];

	cout<<"-------------------------------------------------\n";
	cout<<"     Program Structur Daftar Peminjaman Buku    \n";
	cout<<"-------------------------------------------------\n";
	int x,y,z,w;
	cout<<"Masukan jumlah Mahasiswa Meminjam Buku : ";cin>>y;
	for(x=0;x<y;x++)
	 {
	    cout<<"Nomer                      : ";cin>>mhs[x].no;
	    cout<<"Masukan Nama Mahasiswa     : ";cin>>mhs[x].nama;
	    cout<<"Masukan NRP Mahasiswa      : ";cin>>mhs[x].nrp;
	    cout<<"Masukan Tanggal Pinjam     : ";cin>>mhs[x].tgl.tgl;
	    cout<<"Masukan Bulan Pinjam       : ";cin>>mhs[x].tgl.bln;
	    cout<<"Masukan Tahun Pinjam       : ";cin>>mhs[x].tgl.thn;
	    cout<<endl;
	    {
	     for(z=0;z<2;z++)
	        {
	        cout<<"Masukan Kode Buku          : ";cin>>mhs[x].bku[z].kb;
	        cout<<"Masukan Nomer Referensi    : ";cin>>mhs[x].bku[z].nr;
	        cout<<"Masukan Tipe ( R / U )     : ";cin>>mhs[x].bku[z].r_u;
	        cout<<endl;
	        }
	    }
	 }
			cout<<endl;
			cout<<"-------------------------------------------------------------------------\n";
			cout<<"\t\t\t\t\t\tKB\t"<<"NR\t"<<" R/U "<<endl;
			cout<<"-------------------------------------------------------------------------\n";
			for(x=0;x<y;x++)
			    {
			    cout<<mhs[x].no<<"\t"<<mhs[x].nama<<"\t"<<mhs[x].nrp<<"\t    "<<mhs[x].tgl.tgl<<"/"<<mhs[x].tgl.bln<<"/"<<mhs[x].tgl.thn<<"\t\t";
			    {
			    for(z=0;z<2;z++)
			    {
			    cout<<mhs[x].bku[z].kb<<"\t"<<mhs[x].bku[z].nr<<"\t"<<mhs[x].bku[z].r_u<<endl<<"\t\t\t\t\t\t";
			    }
			    cout<<endl;
			}
			}
}