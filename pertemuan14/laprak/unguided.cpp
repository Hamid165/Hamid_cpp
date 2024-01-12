#include <iostream>
using namespace std;

bool sequential_search(string data_129[], int n, string search_129, int &index_129)
{
    for (int i = 0; i < n; ++i)
    {
        if (data_129[i] == search_129)
        {
            index_129 = i;
            return true;
        }
    }
    return false;
}

int main()
{
    int n = 10;
    string data_129[] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP", "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
    string search_129 = "R 999 RS";
    int index_129;

    bool datasearch_129 = sequential_search(data_129, n, search_129, index_129);

    if (datasearch_129)
    {
        cout << "Nomor " << search_129 << " ditemukan pada posisi indeks ke-" << index_129 << endl;
    }
    else
    {
        cout << "Nomor " << search_129 << " tidak ditemukan" << endl;
    }

    return 0;
}
