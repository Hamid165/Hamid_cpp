#include <iostream>
using namespace std;
int main()
{
    // Luas Segitiga
    // a=alas
    // t=tinggi
    // r=rumus
    float a, t;
    float r = 0.5;
    cout << "Masukkan alas : ";
    cin >> a;
    cout << "Masukkan tinggi : ";
    cin >> t;
    float rumus = r * a * t;
    cout << "Luas Segitiga : " << rumus << endl;
    return 0;

    // luas lingkaran
    //  int rumus = 22 / 7;
    //  // float rumus = 3.14;
    //  int jari;
    //  float luas;
    //  cout << "Program Menghitung LuasLingkaran \n ";
    //  cout << "Masukan Jari-Jari Lingkaran = ";
    //  cin >> jari;
    //  luas = rumus * jari * jari;
    //  cout << "Luas Lingkaran dengan jari - jari " << jari << " = " << luas << endl;
    //  return 0;
}
