#include <iostream>
using namespace std;

int main()
{
    int menu;
    int jmlh;
    float total, bayar, kembalian;

    cout << "Pilih kode menu : " << endl;
    cout << "1. Pake Hemat" << endl;
    cout << "2. Paket Nasi" << endl;
    cout << "3. Paket Spesial" << endl;

    cout << "Masukan kode : ";
    cin >> menu;

    cout << "Masukan jumlah : ";
    cin >> jmlh;

    switch (menu)
    {
    case 101: 
        total = jmlh * 10000;
        break;
    case 102:
        total = jmlh * 17000;
        break;
    case 103:
        total = jmlh * 21000;
        break;
    }


    float pajak = 0.15 * total;
    total += pajak;

    cout << "Total + pajak 15% : " << total << endl;

    cout << "Bayar : ";
    cin >> bayar;

    kembalian = bayar - total;

    cout << "Kembalian : " << kembalian << endl;

    return 0;
}
