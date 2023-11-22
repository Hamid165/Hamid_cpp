#include <iostream>
using namespace std;

int main()
{
    int i, max_128, min_128, total_128, pilihan_128, data[10];

    while (true)
    {
        cout << "\n"
             << endl;
        cout << " Menu " << endl;
        cout << "1. Inputkan Array" << endl;
        cout << "2. Tampil Array" << endl;
        cout << "3. Cari Nilai Minimum" << endl;
        cout << "4. Cari Nilai Maksimum" << endl;
        cout << "5. Hitung Rata-rata" << endl;
        cout << "6. stop" << endl;

        cout << "Masukkan Pilihan : ";
        cin >> pilihan_128;

        switch (pilihan_128)
        {
        case 1:
            for (i = 0; i < 10; i++)
            {
                cout << "Masukkan bilangan bulat : ";
                cin >> data[i];
            }
            break;
        case 2:
            for (i = 0; i < 10; i++)
            {
                cout << data[i] << endl;
            }
            break;
        case 3:
            min_128 = data[0];
            for (i = 0; i < 10; i++)
            {
                if (data[i] < min_128)
                {
                    min_128 = data[i];
                }
            }
            cout << "Nilai Minimum : " << min_128 << endl;
            break;
            break;
        case 4:
            max_128 = data[0];
            for (i = 0; i < 10; i++)
            {
                if (data[i] > max_128)
                {
                    max_128 = data[i];
                }
            }
            cout << "Nilai Maksimum : " << max_128 << endl;
            break;
        case 5:
            total_128 = 0;
            for (i = 0; i < 10; i++)
            {
                total_128 += data[i];
            }
            cout << "Nilai Rata-rata : " << total_128 / 10 << endl;
            break;

        case 6:
            cout << "Program Berhenti " << endl;
            return 0;
        default:
            cout << "Input yang anda masukan salah " << endl;
            break;
        }
    }
    return 0;
}