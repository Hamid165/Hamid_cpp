#include <iostream>
using namespace std;

int main()
{
    int bulan[30] = {};
    int total = 0;

    for (int i = 0; i < 30; i++)
    {
        cout << "Masukkan total penjualan bulan ke-" << i + 1 << ": ";
        cin >> bulan[i];
        total += bulan[i];
    }

    cout << "Total penjualan: " << total << endl;

    return 0;
}