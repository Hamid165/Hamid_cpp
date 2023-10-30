#include <iostream>
using namespace std;
int main()
{
    int nohari;
    cout << "Masukkan nomor hari (1..7): ";
    cin >> nohari;
    switch (nohari)
    {
    case 1:
        cout << "Hari ke-" << nohari << ": adalah MINGGU";
        break;
    case 2:
        cout << "Hari ke-" << nohari << ": adalah SENIN";
        break;
    case 3:
        cout << "Hari ke-" << nohari << ": adalah SELASA";
        break;
    case 4:
        cout << "Hari ke-" << nohari << ": adalah RABU";
        break;
    case 5:
        cout << "Hari ke-" << nohari << ": adalah KAMIS";
        break;
    case 6:
        cout << "Hari ke-" << nohari << ": adalah JUMAT";
        break;
    case 7:
        cout << "Hari ke-" << nohari << ": adalah SABTU";
        break;
    default:
        cout << "Tidak terdapat nama hari ke " << nohari;
    }
    return 0;
}