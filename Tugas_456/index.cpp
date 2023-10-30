#include <iostream>
using namespace std;
// soal 1p menggunakan switchh case
int main()
{
    int pilihan_129;
    cout << "1. Entry Data" << endl;
    cout << "2. Cetak Laporan" << endl;
    cout << "3. Tentang" << endl;
    cout << "4. Halaman Utama" << endl;
    cout << "5. Lihat Laporan" << endl;
    cout << "6. Keluar" << endl;
    cout << "masukan pilihan: ";
    cin >> pilihan_129;
    switch (pilihan_129)
    {
    case 1:
        cout << "Anda memilih menuAnda Memilih Menu Entry Data";
        break;
    case 2:
        cout << "Anda memilih menuAnda Memilih Menu Cetak Laporan";
        break;
    case 3:
        cout << "Anda memilih menuAnda Memilih Menum Tentang";
        break;
    case 4:
        cout << "Anda memilih menuAnda Memilih Menu Halaman Utama";
        break;
    case 5:
        cout << "Anda memilih menuAnda Memilih Menu Lihat Laporan";
        break;
    case 6:
        exit(0);
    default:
        cout << "Anda memilih menusalah input";
    }
    return 0;
}