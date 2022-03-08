#include <iostream>
#include <sstream>
#include <array>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

string convertInttoString(int num)
{
    string str;
    stringstream ss;
    ss << num;
    ss >> str;
    return str;
}

struct pinjambuku //membuat struktur pinjambuku
{
    string tema_buku_dipinjam, judul_buku_dipinjam, nama_peminjam, tanggal_pinjam, kode_pinjam, status;
} pinjambuku[100]; //deklarasikan

int main()
{
    system("cls");

    string judul_buku[1];
    string nama, nim, yn, inpt_kode_pinjam, testing;
    int pilih_menu, pilih_tema, pilih_buku;
    int index = -1;
    int lenght_kode, lenght_nama, lenght_tema, lenght_buku, lenght_tanggal, lenght_status;
    array<string, 3> daftar_tema = {"Teknologi", "Pendidikan", "Olahraga"};
    array<string, 5> buku_teknologi = {"Head First Design Patterns", "Head First Java", "Head First Android Development", "Head First PHP & MySQL", "Head First Programming"};
    array<string, 5> buku_pendidikan = {"Ilmu Pendidikan Islam", "Ilmu Pendidikan, Teoretis dan Praktis", "Pengantar Ilmu Pendidikan", "Menjadi Guru Hebat Zaman Now", "Pendidikan Yang Memiskinkan"};
    array<string, 5> buku_olahraga = {"Basket Untuk Pemula (Teori & Praktik)", "Dari Belakang Gawang", "Jago Bulu Tangkis", "Jago Beladiri", "Jago Bola Basket"};

    time_t now = time(0);
    tm *ltm = localtime(&now);

    int tm_mday = ltm->tm_mday;
    int tm_mon = 1 + ltm->tm_mon;
    int tm_year = 1900 + ltm->tm_year;

    cout << "------- Program Aplikasi Sederhana Perpustakaan -------" << endl;
    cout << endl;
    cout << "Silahkan Masukan Nama\t : ";
    getline(cin, nama);
    cout << "Silahkan Masukan NIM\t : ";
    cin >> nim;
    cout << endl;

mulai_menu: //mulai menu
    cout << "-------- Daftar Menu --------" << endl;
    cout << " 1. Peminjaman" << endl;
    cout << " 2. Pengembalian" << endl;
    cout << " 3. Riwayat Peminjaman" << endl;
    cout << "-----------------------------" << endl;
    cout << "Tentukan Pilihan Anda [1 s.d 3] : ";
    cin >> pilih_menu;
    system("cls");

    switch (pilih_menu)
    {
    case 1:
        do
        {
            cout << "-------- Daftar Tema Buku --------" << endl;
            for (int i = 0; i < daftar_tema.size(); i++)
            {
                cout << i + 1 << ". " << daftar_tema[i] << endl;
            }
            cout << "----------------------------------" << endl;
            cout << "Silahkan Pilih Tema Buku [1 s.d 3] : ";
            cin >> pilih_tema;

            switch (pilih_tema)
            {
            case 1:
                do
                {
                    system("cls");
                    cout << "-------- Daftar Buku --------" << endl;
                    for (int i = 0; i < buku_teknologi.size(); i++)
                    {
                        cout << i + 1 << ". " << buku_teknologi[i] << endl;
                    }
                    cout << "-----------------------------" << endl;
                    cout << "Silahkan Pilih Buku [1 s.d 5] : ";
                    cin >> pilih_buku;
                } while (pilih_buku > 5 || pilih_buku <= 0);

                index++;
                pinjambuku[index].judul_buku_dipinjam = buku_teknologi[pilih_buku - 1];
                break;

            case 2:
                do
                {
                    system("cls");
                    cout << "-------- Daftar Buku --------" << endl;
                    for (int i = 0; i < buku_pendidikan.size(); i++)
                    {
                        cout << i + 1 << ". " << buku_pendidikan[i] << endl;
                    }
                    cout << "-----------------------------" << endl;
                    cout << "Silahkan Pilih Buku [1 s.d 5] : ";
                    cin >> pilih_buku;
                } while (pilih_buku > 5 || pilih_buku <= 0);

                index++;
                pinjambuku[index].judul_buku_dipinjam = buku_pendidikan[pilih_buku - 1];
                break;

            case 3:
                do
                {
                    system("cls");
                    cout << "-------- Daftar Buku --------" << endl;
                    for (int i = 0; i < buku_olahraga.size(); i++)
                    {
                        cout << i + 1 << ". " << buku_olahraga[i] << endl;
                    }
                    cout << "-----------------------------" << endl;
                    cout << "Silahkan Pilih Buku [1 s.d 5] : ";
                    cin >> pilih_buku;
                } while (pilih_buku > 5 || pilih_buku <= 0);

                index++;
                pinjambuku[index].judul_buku_dipinjam = buku_olahraga[pilih_buku - 1];
                break;

            default:
                system("cls");
                cout << "Tema tidak tersedia!!" << endl;
                system("pause");
                system("cls");
                goto mulai_menu;
                break;
            }

            system("cls");

            pinjambuku[index].tema_buku_dipinjam = daftar_tema[pilih_tema - 1];
            pinjambuku[index].nama_peminjam = nama;
            pinjambuku[index].tanggal_pinjam = convertInttoString(tm_mday) + "-" + convertInttoString(tm_mon) + "-" + convertInttoString(tm_year);
            pinjambuku[index].kode_pinjam = convertInttoString(tm_mday) + convertInttoString(tm_mon) + convertInttoString(tm_year) + convertInttoString(index);
            pinjambuku[index].status = "Dipinjam";

            cout << "\t\t\t\t\t\tData Peminjaman" << endl;
            cout << "\t\t\t\t\t\t____" << endl;
            cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "| Kode Pinjam |    Nama Peminjam    |   Tema Buku   |               Judul Buku               | Tanggal Peminjaman |" << endl;
            cout << "-------------------------------------------------------------------------------------------------------------------" << endl;

            lenght_kode = pinjambuku[index].kode_pinjam.length();
            lenght_kode = 14 - lenght_kode;

            lenght_nama = pinjambuku[index].nama_peminjam.length();
            lenght_nama = 22 - lenght_nama;

            lenght_tema = pinjambuku[index].tema_buku_dipinjam.length();
            lenght_tema = 16 - lenght_tema;

            lenght_buku = pinjambuku[index].judul_buku_dipinjam.length();
            lenght_buku = 41 - lenght_buku;

            cout << "| " << pinjambuku[index].kode_pinjam << setw(lenght_kode) << "| " << pinjambuku[index].nama_peminjam << setw(lenght_nama) << "| " << pinjambuku[index].tema_buku_dipinjam << setw(lenght_tema) << "| " << pinjambuku[index].judul_buku_dipinjam << setw(lenght_buku) << "| " << pinjambuku[index].tanggal_pinjam << setw(10) << "|" << endl;
            cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Note : Harap dikembalikan maksimal 7 hari dari tanggal peminjaman." << endl;

            cout << endl
                 << "Selamat Membaca." << endl;
            cout << "Terima Kasih." << endl;

            cout << endl
                 << "Apakah Anda Ingin Meminjam Buku Lagi? [y/n] : ";
            cin >> yn;
            system("cls");
        } while (yn == "y" || yn == "Y");
        goto mulai_menu;
        break;

    case 2:
        cout << "\t\t\t\t\tPengembalian Buku" << endl;
        cout << "\t\t\t\t\t____" << endl;

        cout << endl
             << "Masukan Kode Pinjam Anda : ";
        cin >> inpt_kode_pinjam;

        for (int i = 0; i <= index; i++)
        {
            if (inpt_kode_pinjam == pinjambuku[i].kode_pinjam)
            {
                if (pinjambuku[i].status == "Dikembalikan")
                {
                    cout << endl << "Buku Telah Dikembalikan." << endl;
                    cout << "Terima Kasih." << endl;

                    system("pause");
                    system("cls");
                    goto mulai_menu;
                }
                else
                {
                    cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "| Kode Pinjam |    Nama Peminjam    |   Tema Buku   |               Judul Buku               | Tanggal Peminjaman |     Status     |" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;

                    lenght_kode = pinjambuku[i].kode_pinjam.length();
                    lenght_kode = 14 - lenght_kode;

                    lenght_nama = pinjambuku[i].nama_peminjam.length();
                    lenght_nama = 22 - lenght_nama;

                    lenght_tema = pinjambuku[i].tema_buku_dipinjam.length();
                    lenght_tema = 16 - lenght_tema;

                    lenght_buku = pinjambuku[i].judul_buku_dipinjam.length();
                    lenght_buku = 41 - lenght_buku;

                    lenght_tanggal = pinjambuku[i].tanggal_pinjam.length();
                    lenght_tanggal = 21 - lenght_tanggal;

                    lenght_status = pinjambuku[i].status.length();
                    lenght_status = 16 - lenght_status;

                    cout << "| " << pinjambuku[i].kode_pinjam << setw(lenght_kode) << "| " << pinjambuku[i].nama_peminjam << setw(lenght_nama) << "| " << pinjambuku[i].tema_buku_dipinjam << setw(lenght_tema) << "| " << pinjambuku[i].judul_buku_dipinjam << setw(lenght_buku) << "| " << pinjambuku[i].tanggal_pinjam << setw(lenght_tanggal) << "| " << pinjambuku[i].status << setw(lenght_status) << "|" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
                }
            }
            else
            {
                cout << endl << "Kode Pinjam Yang Anda Masukan Tidak Terdaftar." << endl;
                cout << "Terima Kasih." << endl;
                system("pause");
                system("cls");
                goto mulai_menu;
            }
        }

        cout << "Apakah Anda Ingin Mengembalikan Buku? [y/n] : ";
        cin >> yn;

        if (yn == "y" || yn == "Y")
        {
            for (int i = 0; i <= index; i++)
            {
                if (inpt_kode_pinjam == pinjambuku[i].kode_pinjam)
                {
                    pinjambuku[i].status = "Dikembalikan";
                    cout << endl
                         << "Buku Telah Dikembalikan." << endl;
                    cout << "Terima Kasih." << endl;
                }
            }
        }

        system("pause");
        system("cls");
        goto mulai_menu;
        break;

    case 3:
        cout << "\t\t\t\t\t\tRiwayat Peminjaman" << endl;
        cout << "\t\t\t\t\t\t____" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "| Kode Pinjam |    Nama Peminjam    |   Tema Buku   |               Judul Buku               | Tanggal Peminjaman |     Status     |" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
        for (int i = 0; i <= index; i++)
        {
            lenght_kode = pinjambuku[i].kode_pinjam.length();
            lenght_kode = 14 - lenght_kode;

            lenght_nama = pinjambuku[i].nama_peminjam.length();
            lenght_nama = 22 - lenght_nama;

            lenght_tema = pinjambuku[i].tema_buku_dipinjam.length();
            lenght_tema = 16 - lenght_tema;

            lenght_buku = pinjambuku[i].judul_buku_dipinjam.length();
            lenght_buku = 41 - lenght_buku;

            lenght_tanggal = pinjambuku[i].tanggal_pinjam.length();
            lenght_tanggal = 21 - lenght_tanggal;

            lenght_status = pinjambuku[i].status.length();
            lenght_status = 16 - lenght_status;

            cout << "| " << pinjambuku[i].kode_pinjam << setw(lenght_kode) << "| " << pinjambuku[i].nama_peminjam << setw(lenght_nama) << "| " << pinjambuku[i].tema_buku_dipinjam << setw(lenght_tema) << "| " << pinjambuku[i].judul_buku_dipinjam << setw(lenght_buku) << "| " << pinjambuku[i].tanggal_pinjam << setw(lenght_tanggal) << "| " << pinjambuku[i].status << setw(lenght_status) << "|" << endl;
        }
        cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Note : Harap dikembalikan maksimal 7 hari dari tanggal peminjaman." << endl;
        system("pause");
        system("cls");
        goto mulai_menu;
        break;

    default:
        cout << "Menu Tidak Tersedia!!" << endl;
        system("pause");
        system("cls");
        goto mulai_menu;
        break;
    }
}
