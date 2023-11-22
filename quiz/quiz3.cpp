#include <iostream>
using namespace std;
int main()
{
    float jari_jari, luas;
    float phi = 3.14;
    cout << "Masukkan Jari-Jari : ";
    cin >> jari_jari;
    luas = phi * jari_jari * jari_jari;
    cout << "Luas Lingkaran adalah : " << luas;
    return 0;
}