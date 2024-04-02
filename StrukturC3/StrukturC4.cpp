#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++) {
        cout << "Nomor Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "Alamat Mahasiswa : " << endl;
        cout << "\t Nama Desa : ";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama Kota : ";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "\n NIM : " << mhs[1].nim;
        cout << "\n Nama : " << mhs[1].nama;
        cout << "\n Alamat : ";
        cout << "\n \t Desa : ";
        cout << "\n \t Kota : ";
        cout << "\n Umur : " << mhs[1].umur;
    }
}