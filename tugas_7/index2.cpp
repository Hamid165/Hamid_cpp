#include <iostream>
using namespace std;

int array_129[10];
int jmlh_129 = 0;

int main()
{
    int pilihan;
    do
    {
        cout << "MENU" << endl;
        cout << "1. Input array" << endl;
        cout << "2. Tampilkan array" << endl;
        cout << "3. Cari Minimum" << endl;
        cout << "4. Cari Maksimum" << endl;
        cout << "5. Hitung Rata-rata" << endl;
        cout << "0. Keluar" << endl;
        cout << "Masukan Pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan 10 angka ke array" << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << "Nilai angka bilangan bulat ke- " << (i + 1) << " : ";
                cin >> array_129[i];
            }
            jmlh_129 = 10;
            break;
        case 2:
            cout << "Isi array adalah : ";
            for (int i = 0; i < jmlh_129; i++)
            {
                cout << array_129[i] << ",";
            }
            cout << endl;
            break;
        case 3:
            if (jmlh_129 == 0)
            {
                cout << "array tidak ada atau ksoong." << endl;
            }
            else
            {
                int min_129 = array_129[0];
                for (int i = 1; i < jmlh_129; i++)
                {
                    if (array_129[i] < min_129)
                    {
                        min_129 = array_129[i];
                    }
                }
                cout << "Nilai minimum pada array adalah : " << min_129 << endl;
            }
            break;
        case 4:
            if (jmlh_129 == 0)
            {
                cout << "array kosong." << endl;
            }
            else
            {
                int maks_129 = array_129[0];
                for (int i = 1; i < jmlh_129; i++)
                {
                    if (array_129[i] > maks_129)
                    {
                        maks_129 = array_129[i];
                    }
                }
                cout << "Nilai maksimum pada array adalah : " << maks_129 << endl;
            }
            break;
        case 5:
            if (jmlh_129 == 0)
            {
                cout << "Array kosong." << endl;
            }
            else
            {
                int rata_129 = 0;
                for (int i = 0; i < jmlh_129; i++)
                {
                    rata_129 += array_129[i];
                }
                double rata_rata = (double)rata_129 / jmlh_129;

                cout << "Rata-rata dari nilai pada array adalah : " << rata_rata << endl;
            }
            break;
        default:
            cout << "Pilihan tidak ada." << endl;
        }
    } while (pilihan != 0);

    return 0;
}
