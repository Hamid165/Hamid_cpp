#include <iostream>
using namespace std;
int main()
{
    int pilihan;
    cout << "1. Apel" << endl;
    cout << "2. Mangga" << endl;
    cout << "3. Keluar" << endl;
    cout << "masukan pilihan:" << endl;
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        cout << "\n\nAnda memilih aple";
        break;
    case 2:
        cout << "\n\nAnda memilih mangga";
        break;
    case 3:
        exit(0);
    default:
        cout << "\n\nsalah input";
    }
    return 0;
}
//     float umur;
//     cout << "Masukan Umur Anda : ";
//     cin >> umur;
//     if (umur >= 17 && umur <= 20)
//         cout << "\nAnda cukup umur" << endl;
//     else if (umur >= 13 && umur <= 16)
//         cout << "\nAnda belum cukup umur" << endl;
//     else
//     {
//         cout << "\nanda masih kecil" << endl;
//     }
//     return 0;
// }

// int a;
// cout << "inout nilai" << endl;
// cin >> a;
// if (a >= 60)
// {
//     cout << "Anda lulus dengan predikat A";
// }
// return 0;
//     int umur;
//     cout << "masukan umur :";
//     cin >> umur;
//     if (umur >= 17)
//     {
//         cout << "anda cukup umur" << endl;
//     }
//     else if (umur >= 13)
//     {
//         cout << " anda belum cukup umur " << endl;
//     }
//     else
//     {
//         cout << " anda masih bocil " << endl;
//     }
//     return 0;
// }

// int nilai;
// cout << "Masukkan Nilai : ";
// cin >> nilai;
// if (nilai >= 80 && nilai <= 100)
// {
//     cout << "Lulus Dengan Nilai A";
// }
// else if ((nilai <= 79 && nilai >= 65))
// {
//     cout << "Lulus Dengan Nilai B";
// }
// else
// {
//     cout << "Tidak lulus";
// }
// return 0;