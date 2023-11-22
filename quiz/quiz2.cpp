#include <iostream>
using namespace std;
int main()
{

    float alas, tinggi, hasil;
    int phi = 2;
    cout << "Masukkan panjang alas = ";
    cin >> alas;
    cout << "Masukkan tinggi = ";
    cin >> tinggi;
    hasil = (alas * tinggi) / phi;
    cout << "Luas segitiga adalah = " << hasil;
    return 0;
}