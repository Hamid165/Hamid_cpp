#include <iostream>
using namespace std;
int function_binary_search(char data[], int n, char k)
{
    int atas, bawah, tengah, posisi;
    bool ada;
    ada = false;
    bawah = 0;
    atas = n - 1;
    posisi = -1;
    while (bawah <= atas)
    {
        tengah = (atas + bawah) / 2;
        if (k == data[tengah])
        {
            posisi = tengah;
            break;
        }

        else if (k < data[tengah])
            atas = tengah - 1;
        else if (k > data[tengah])
            bawah = tengah + 1;
    }
    return posisi;
}
int main()
{
    int n = 7;
    char data[] = {'a', 'b', 'c', 'e', 'g', 'h', 'j'};
    char k = 'c';
    int posisi = function_binary_search(data, n, k);
    if (posisi != -1)
    {
        cout << "kunci " << k << " ditemukan pada posisi indeks ke-" << posisi << endl;
    }
    else
    {
        cout << "kunci " << k << " tidak ditemukan" << endl;
    }
    return 0;
}