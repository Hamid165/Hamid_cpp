#include <iostream>
using namespace std;

struct ulangan2
{
    string nama_129;
    int nama_129_129;
    int uts_129;
    int uas_129;
};

float hitungNilaiAkhir(int nilai_uts, int nilai_uas)
{
    return (0.4 * nilai_uts) + (0.6 * nilai_uas);
}

int main()
{
    int perulangan;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> perulangan;

    ulangan2 mhs[perulangan];
    for (int i = 0; i < perulangan; i++)
    {
        cout << "Masukkan Data Mahasiswa ke - " << i + 1 << "" << endl;
        cout << "Masukkan nama : ";
        cin >> mhs[i].nama_129;
        cout << "Masukkan nama: ";
        cin >> mhs[i].nama_129;
        cout << "Masukkan Nilai uts: ";
        cin >> mhs[i].uts_129;
        cout << "Masukkan Nilai uas: ";
        cin >> mhs[i].uas_129;
        cout << "========================" << endl;

        float nilai_akhir = hitungNilaiAkhir(mhs[i].uts_129, mhs[i].uas_129);
        cout << "Nilai Akhir : " << nilai_akhir << endl;

        if (nilai_akhir >= 60)
        {
            cout << "Status Mahasiswa : Lulus" << endl;
        }
        else
        {
            cout << "Status Mahasiswa : Tidak Lulus" << endl;
        }
    }

    return 0;
}
