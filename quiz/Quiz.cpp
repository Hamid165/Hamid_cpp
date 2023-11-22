#include <iostream>
using namespace std;
void penjumlahan()
{
    cout << "\n";
    cout << "Menu Penjumlahan\n"
         << endl;
    int bil1, bil2, hasil;
    cout << "Masukan angka pertama : ";
    cin >> bil1;
    cout << "Masukan angka kedua : ";
    cin >> bil2;
    hasil = bil1 + bil2;
    cout << "Hasil Penjumlahan : " << hasil << endl;
}
void luas_segitiga()
{
    cout << "\n";
    cout << "Menu Luas Segitiga\n"
         << endl;
    float alas, tinggi, hasil;
    int bagi = 2;
    cout << "Masukkan panjang alas = ";
    cin >> alas;
    cout << "Masukkan tinggi = ";
    cin >> tinggi;
    hasil = (alas * tinggi) / bagi;
    cout << "Luas segitiga adalah = " << hasil;
}
void keliling_lingkaran()
{
    cout << "\n";
    cout << "Menu Keliling Lingkaran\n"
         << endl;
    float jari_jari, luas;
    float phi = 3.14;
    cout << "Masukkan Jari-Jari : ";
    cin >> jari_jari;
    luas = 2 * phi * jari_jari;
    cout << "Luas Lingkaran adalah : " << luas;
}
int main()
{
    int menu;
    do
    {
        cout << "\n";
        cout << "Menu Pilihan" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Luas Segitiga" << endl;
        cout << "3. Luas Lingkaran" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukan angka menu : ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            penjumlahan();
            break;
        case 2:
            luas_segitiga();
            break;
        case 3:
            keliling_lingkaran();
            break;
        default:
            cout << "Program Berhenti";
            return 0;
        }
    } while (menu != 0);

    return 0;
}
