#include <iostream>
using namespace std;
int main()
{
    int pilihan;
    char huruf;
    cout << "1. isi kubus" << endl;
    cout << "2. luas lingkaran" << endl;
    cout << "3. isi silinder" << endl;
    cout << "masukan pilihan menu:" << endl;
    cin >> pilihan;
    switch (pilihan)
    case 1:
        cout << "Masukkan sebuah huruf: ";
    cin >> huruf;

    switch (huruf)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << huruf << " adalah huruf vokal." << endl;
        break;
    default:
        cout << huruf << " bukan huruf vokal." << endl;
    }

    float a;
    float b;
    cout << "masukan nilai a" << endl;
    cout << "masukan nilai b" << endl;
    cin >> a;
    cin >> b;
    float hasil = a / b;

    cout << "Hasil pembagian: " << hasil << endl;

    return 0;
}
