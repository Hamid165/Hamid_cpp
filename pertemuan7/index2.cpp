#include <iostream>
using namespace std;

string daftar_mhs[39] = {};
int jmlh_mhs;

int main()
{
    cout << "Masukkan jumlah mahasiswa yang akan disimpan : ";
    cin >> jmlh_mhs;
    int i;
    string nama;
    for (i = 0; i < jmlh_mhs; i++)
    {
        cout << "Nama Mahasiswa ke-" << (i + 1) << ":";
        cin >> nama;
        daftar_mhs[i] = nama;
    }
    cout << "nama yang sudah anda simpan adalah : " << endl;
    for (i = 0; i < jmlh_mhs; i++)
    {
        cout << daftar_mhs[i] << endl;
    }
    //  cout << "bulan ke - " << jmlh_mhs << "adalah : " << daftar_mhs[jmlh_mhs - 1];
    return 0;
}