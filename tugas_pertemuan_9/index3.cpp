#include <iostream>
#include <cmath>

using namespace std;

void penjumlahan129()
{
    cout << "\n";
    cout << "Menu Penjumlahan\n"
         << endl;
    int bil1_129, bil2_129, jumlah;
    cout << "Bilangan Pertama : ";
    cin >> bil1_129;
    cout << "Bilangan Kedua : ";
    cin >> bil2_129;
    jumlah = bil1_129 + bil2_129;
    cout << "Hasil Penjumlahan : " << jumlah << endl;
}

void perkalian129()
{
    cout << "\n";
    cout << "Menu Perkalian\n"
         << endl;
    int bil1_129, bil2_129, kali;
    cout << "Bilangan Pertama : ";
    cin >> bil1_129;
    cout << "Bilangan Kedua : ";
    cin >> bil2_129;
    kali = bil1_129 * bil2_129;
    cout << "Hasil Perkalian : " << kali << endl;
}

void pengurangan129()
{
    cout << "\n";
    cout << "Menu Pengurangan\n"
         << endl;
    int bil1_129, bil2_129, kurang;
    cout << "Bilangan Pertama : ";
    cin >> bil1_129;
    cout << "Bilangan Kedua : ";
    cin >> bil2_129;
    kurang = bil1_129 - bil2_129;
    cout << "Hasil Pengurangan : " << kurang << endl;
}

void pangkat129()
{
    cout << "\n";
    cout << "Menu Perpangkatan\n"
         << endl;
    int bil1_129, bil2_129, pangkat;
    cout << "Bilangan Pertama : ";
    cin >> bil1_129;
    cout << "Bilangan Kedua : ";
    cin >> bil2_129;
    pangkat = pow(bil1_129, bil2_129);
    cout << "Hasil Perpangkatan : " << pangkat << endl;
}

void pembagian129()
{
    cout << "\n";
    cout << "Menu Pembagian\n"
         << endl;
    int bil1_129, bil2_129, bagi;
    cout << "Bilangan Pertama : ";
    cin >> bil1_129;
    cout << "Bilangan Kedua : ";
    cin >> bil2_129;
    bagi = bil1_129 / bil2_129;
    cout << "Hasil Pembagian : " << bagi << endl;
}
int main()
{
    int menu;
    do
    {
        cout << "Menu Pilihan" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Perkalian" << endl;
        cout << "3. Pembagian" << endl;
        cout << "4. Pengurangan" << endl;
        cout << "5. Perpangkatan" << endl;
        cout << "6. Exit" << endl;
        cout << "Masukan angka menu : ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            penjumlahan129();
            break;
        case 2:
            perkalian129();
            break;
        case 3:
            pembagian129();
            break;
        case 4:
            pengurangan129();
            break;
        case 5:
            pangkat129();
            break;
        default:
            cout << "Program Berhenti";
            return 0;
        }

    } while (menu != 0);

    return 0;
}
