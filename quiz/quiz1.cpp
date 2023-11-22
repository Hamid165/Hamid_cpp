#include <iostream>
using namespace std;

int penjumlahan(int x, int y)
{
    return x + y; 
}

float luas_segitiga(float alas, float tinggi)
{
    return (alas * tinggi) / 2; 
}

float keliling_lingkaran(float jari_jari)
{
    float phi = 3.14;
    return 2 * phi * jari_jari; 
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
        cout << "3. Keliling Lingkaran" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan angka menu : ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            int bil1, bil2;
            cout << "Masukan angka pertama : ";
            cin >> bil1;
            cout << "Masukan angka kedua : ";
            cin >> bil2;
            cout << "Hasil Penjumlahan : " << penjumlahan(bil1, bil2) << endl;
            break;
        case 2:
            float alas, tinggi;
            cout << "Masukkan panjang alas = ";
            cin >> alas;
            cout << "Masukkan tinggi = ";
            cin >> tinggi;
            cout << "Luas segitiga adalah = " << luas_segitiga(alas, tinggi) << endl;
            break;
        case 3:
            float jari_jari;
            cout << "Masukkan Jari-Jari : ";
            cin >> jari_jari;
            cout << "Keliling Lingkaran adalah : " << keliling_lingkaran(jari_jari) << endl;
            break;
        default:
            cout << "Program Berhenti" << endl;
            return 0;
        }
    } while (menu != 4);

    return 0;
}
