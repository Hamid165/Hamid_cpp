#include <iostream>
using namespace std;

bool binarySearch(int arr_129[], int n, int x)
{
    int angka_129 = 0, nomor_129 = n - 1;
    while (angka_129 <= nomor_129)
    {
        int mid = angka_129 + (nomor_129 - angka_129) / 2;

        if (arr_129[mid] == x)
            return true;

        if (arr_129[mid] < x)
            angka_129 = mid + 1;

        else
            nomor_129 = mid - 1;
    }

    return false;
}

int main()
{
    int arr_129[] = {21, 61, 28, 72, 44, 68, 37, 52, 75, 75};
    int n = sizeof(arr_129) / sizeof(arr_129[0]);
    int x = 71;
    if (binarySearch(arr_129, n, x))
        cout << "Angka " << x << " ditemukan dalam array.";
    else
        cout << "Angka " << x << " tidak ditemukan dalam array.";
    return 0;
}