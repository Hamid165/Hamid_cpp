#include <iostream>
using namespace std;

bool binarySearch(int array_129[], int n, int x)
{
    int angka_129 = 0, nomor_129 = n - 1;
    while (angka_129 <= nomor_129)
    {
        int angka_129 = angka_129 + (nomor_129 - angka_129) / 2;

        if (array_129[angka_129] == x)
            return true;

        if (array_129[angka_129] < x)
            angka_129 = angka_129 + 1;
        else
            nomor_129 = angka_129 - 1;
    }
    return false;
}

int main()
{
    int array_129[] = {12102001, 12102002, 12102003, 12102004, 12102005, 12102006, 12102007, 12102008, 12102009, 12102010, 12102011, 12102012, 12102013};
    int n = sizeof(array_129) / sizeof(array_129[0]);
    int x = 12102011;
    if (binarySearch(array_129, n, x))
        cout << "NIM " << x << " ditemukan di kelas.";
    else
        cout << "NIM " << x << " tidak ditemukan di kelas.";
    return 0;
}