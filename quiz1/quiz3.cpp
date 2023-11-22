#include <iostream>
using namespace std;
int main()
{
    float angkaPertama, angkaKedua;
    cout << "Masukkan angka pertama : ";
    cin >> angkaPertama;
    cout << "Masukkan angka kedua : ";
    cin >> angkaKedua;
    int jumlah = angkaPertama + angkaKedua;
    cout << "Jumlah dari angka Pertama dan angka Kedua adalah :" << jumlah << endl;
    int kurang = angkaPertama - angkaKedua;
    cout << "Pengurangan dari angka Pertama dan angka Kedua adalah :" << kurang << endl;
    int Kali = angkaPertama * angkaKedua;
    cout << "Perkalian dari angka Pertama dan angka Kedua adalah :" << Kali << endl;
    float Bagi = angkaPertama / angkaKedua;
    cout << "Pembagian dari angka Pertama dan angka Kedua adalah :" << Bagi << endl;

    return 0;

}
