#include <iostream>
    
using namespace std;
// soal 2 menggunakan for perulangan
int main()
{
    int N_129;
    cout << "Masukkan nilai N : ";
    cin >> N_129;

    for (int i = N_129; i >= 1; i--)
    {
        if (i == 1)
        {
            cout << "Anak ayam turun 1, mati satu tinggal induknya" << endl;
        }
        else
        {
            cout << "Anak ayam turun " << i << ", mati satu tinggal " << i - 1 << endl;
        }
    }

    return 0;
}
