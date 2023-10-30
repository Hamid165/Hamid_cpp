#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    // soal nomor 1
    int bilangan;
    char karakter;
    string kata;
    float dec;
    cout << "Menginputkan data berupa angka, karakter" << endl;
    cout << "Inputkan Angka: ";
    cin >> bilangan;
    cout << "Inputkan karakter: ";
    cin >> karakter;
    cout << "Inputkan kata: ";
    cin >> kata;
    cout << "Inputkan decimal: ";
    cin >> dec;
    cout << "Dibawah adalah hasil program diatas" << endl;
    // soal nmr 1
    cout << "Ini output Angka :" << bilangan << endl;
    cout << "Ini output karakter :" << karakter << endl;
    cout << "Ini output kata :" << kata << endl;
    // soal nomo 2
    cout << "Ini output HEX bilangan :" << hex << bilangan << endl;
    cout << setiosflags(ios::fixed);
    // soal no 3
    cout << setprecision(2) << "Ini output DECIMAL dengan panjang 2: " << dec << endl;
    return 0;
}