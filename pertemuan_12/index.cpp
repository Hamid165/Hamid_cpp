#include <iostream>
using namespace std;

int main()
{
    int angka[] = {4, 5, 7, 3, 7, 1, 2};
    int length = sizeof(angka) / sizeof(*angka);
    int CariData, HasilCari = 0; 
    for (int a = 0; a < length; a++)
    {
        cout << "index ke " << a << ": " << angka[a] << endl;
    }
    cout << "Data yang dicari: ";
    cin >> CariData;
    for (int b = 0; b < length; b++)
    {
        if (angka[b] == CariData)
        {
            HasilCari++;
        }
    }

    if (HasilCari == 0)
    {
        cout << "Data tidak ditemukan" << endl;
    }
    else
    {
        cout << "Data ditemukan " << HasilCari << " kali pada indeks: " << endl;
        for (int c = 0; c < length; c++)
        {
            if (angka[c] == CariData)
            {
                cout << "index ke " << c << ": " << angka[c] << endl;
            }
        }
    }
    return 0;
}
