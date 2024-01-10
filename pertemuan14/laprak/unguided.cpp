#include <iostream>
using namespace std;

int binary_search(double data_129[], int n, double search_129, int &index_129)
{
    int angka_129 = 0;
    int nomor_129 = n - 1;
    int A_129 = (angka_129 + nomor_129) / 2;

    while (angka_129 <= nomor_129)
    {
        if (data_129[A_129] == search_129)
        {
            index_129 = A_129;
            return 1;
        }
        else if (data_129[A_129] < search_129)
        {
            angka_129 = A_129 + 1;
        }
        else
        {
            nomor_129 = A_129 - 1;
        }
        A_129 = (angka_129 + nomor_129) / 2;
    }

    return -1;
}

int main()
{
    int n = 10;
    double data_129[] = {701, 300, 1234, 3218, 701, 007, 300, 1234, 3218, 701};
    double search_129 = 999;
    int index_129;

    int datasearch_129 = binary_search(data_129, n, search_129, index_129);

    if (datasearch_129 == 1)
    {
        cout << "Nomor " << search_129 << " ditemukan pada posisi indeks ke-" << index_129 << endl;
    }
    else
    {
        cout << "Nomor " << search_129 << " tidak ditemukan" << endl;
    }

    return 0;
}