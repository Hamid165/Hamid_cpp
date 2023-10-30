#include <iostream>
using namespace std;

int main()
{
    int hari;
    cout << "" << endl;
    cout << "   MENENTUKAN NAMA HARI   " << endl;
    cout << "--------------------------" << endl;
    cout << "   MASUKAN ANGKA 1-7 :    " << endl;
    cin >> hari;

    if (hari == 1)
    {
        cout << "HARI DENGAN INPUTAN " << hari << " ADALAH HARI SENIN" << endl;
    }
    else if (hari == 2)
    {
        cout << "HARI DENGAN INPUTAN " << hari << " ADALAH HARI SELASA" << endl;
    }
    else if (hari == 3)
    {
        cout << "HARI DENGAN INPUTAN " << hari << " ADALAH HARI RABU" << endl;
    }
    else if (hari == 4)
    {
        cout << "HARI DENGAN INPUTAN " << hari << " ADALAH HARI KAMIS" << endl;
    }
    else if (hari == 5)
    {
        cout << "HARI DENGAN INPUTAN " << hari << " ADALAH HARI JUM'AT" << endl;
    }
    else if (hari == 6)
    {
        cout << "HARI DENGAN INPUTAN " << hari << " ADALAH HARI SABTU" << endl;
    }
    else if (hari == 7)
    {
        cout << "HARI DENGAN INPUTAN " << hari << " ADALAH HARI MINGGU" << endl;
    }
    else
    {
        cout << " " << endl;
        cout << "ANGKA YANG DIINPUTKAN SALAH" << endl;
    }
    cout << endl;
    return 0;
}
